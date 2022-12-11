#include "portfolio.h"

#include <iostream>
#include <numeric>

using namespace std;

BasePortfolio::BasePortfolio(DataHandler *dataHandlerPtr, const vector<string> &symbols, double initialCapital) {
    this->dataHandlerPtr = dataHandlerPtr;
    this->eventQueuePtr = dataHandlerPtr->eventQueuePtr;
    this->symbols = symbols;
    this->initialCapital = initialCapital;

    // 交易前时间，要求不同标的数据保持时间戳的一致性保证了此条语句的正确性
    long long initialTimestamp = dataHandlerPtr->bar[symbols[0]]->first - 1;

    // 生成初始持仓头寸
    for (auto &symbol: symbols) {
        currentPositions[symbol] = 0.0;
    }

    allPositions[initialTimestamp] = currentPositions;


    // 生成初始持仓价值
    currentHoldings["cash"] = this->initialCapital;
    currentHoldings["commission"] = 0.0;
    currentHoldings["total"] = this->initialCapital;
    currentHoldings["returns"] = 0.0;

    allHoldings[initialTimestamp] = currentHoldings;
}


void BasePortfolio::onMarket() {
    double notCash = 0.0;
    double prevTotal = allHoldings.rbegin()->second["total"];

    // 要求不同标的数据保持时间戳的一致性保证了此条语句的正确性
    long long timeStamp = dataHandlerPtr->consumedData[symbols[0]].rbegin()->first;

    for (auto &symbol: symbols) {
        allPositions[timeStamp][symbol] = currentPositions[symbol];
        double price = dataHandlerPtr->consumedData[symbol].rbegin()->second.adjClose;
        double currentValue = currentPositions[symbol] * price;
        allHoldings[timeStamp][symbol] = currentValue;
        currentHoldings[symbol] = currentValue;
        notCash += currentValue;
    }

    currentHoldings["total"] = currentHoldings["cash"] + notCash;
    allHoldings[timeStamp]["total"] = currentHoldings["total"];
    allHoldings[timeStamp]["cash"] = currentHoldings["cash"];
    allHoldings[timeStamp]["commission"] = currentHoldings["commission"];
    allHoldings[timeStamp]["returns"] = allHoldings[timeStamp]["total"] / prevTotal - 1;
}

void BasePortfolio::onFill(const shared_ptr<FillEvent> &event) {
    int direction = event->direction == LONG ? 1 : -1;
    double positionChange = direction * event->quantity;;


    double price = dataHandlerPtr->consumedData[event->symbol].rbegin()->second.adjClose;
    double cost = positionChange * price;
    double commission = abs(cost) * commissionRate;

    if (currentHoldings["cash"] < cost + commission) {
        positionChange = currentHoldings["cash"] / (price + commissionRate * price);
        cost = positionChange * price;
        commission = abs(cost) * commissionRate;
    }

    currentPositions[event->symbol] += positionChange;
    currentHoldings[event->symbol] += cost;
    currentHoldings["total"] -= commission;
    currentHoldings["cash"] -= (cost + commission);
    currentHoldings["commission"] += commission;

    string strDirection = event->direction == LONG ? "LONG" : "SHORT";
    cout << "[strategy] " << event->strategyID << ": FILL at "
         << dataHandlerPtr->consumedData[event->symbol].rbegin()->first << " " << strDirection << " "
         << abs(positionChange) << " " << event->symbol << endl << endl;
}

void BasePortfolio::onSignal(const shared_ptr<SignalEvent> &event) {
    eventQueuePtr->push(make_shared<OrderEvent>(event->strategyID, event->symbol, event->quantity,
                                                event->signal > 0 ? LONG : SHORT));
}


void BasePortfolio::calculateMetrics() {

    double avgReturn = 0;
    for (auto &holding: allHoldings)avgReturn += holding.second["returns"];
    // n个时点产生n-1个收益
    avgReturn /= allHoldings.size() - 1;
    performanceMetrics.emplace_back("Average Return (Daily) ", avgReturn * 100);


    double volatility = 0;
    for (auto &holding: allHoldings)
        volatility += (holding.second["returns"] - avgReturn) *
                      (holding.second["returns"] - avgReturn);
    volatility /= allHoldings.size() - 2;
    volatility = sqrt(volatility);
    performanceMetrics.emplace_back("Volatility (Daily) ", volatility * 100);


    double volatilityDownside = 0;
    int downCnt = 0;
    for (auto &holding: allHoldings) {
        if (holding.second["returns"] >= avgReturn)continue;
        downCnt++;
        volatilityDownside += (holding.second["returns"] - avgReturn) * (holding.second["returns"] - avgReturn);
    }
    volatilityDownside /= downCnt - 1;
    volatilityDownside = sqrt(volatilityDownside);
    performanceMetrics.emplace_back("Volatility Downside (Daily) ", volatilityDownside * 100);


    double annualSharpeRatio = sqrt(period) * avgReturn / volatility;
    performanceMetrics.emplace_back("Sharpe Ratio (Annually)", annualSharpeRatio);


    double annualSortinoRatio = sqrt(period) * avgReturn / volatilityDownside;
    performanceMetrics.emplace_back("Sortino Ratio (Annually)", annualSortinoRatio);


    double finalCapital = allHoldings.rbegin()->second["total"];
    double years = (double) allHoldings.size() / period;

    performanceMetrics.emplace_back("Compound Annual Growth Rate ",
                                    (pow(finalCapital / initialCapital, 1 / years) - 1) * 100);

    performanceMetrics.emplace_back("Total Return ", (finalCapital / initialCapital - 1) * 100);


    for (auto &performanceMetric: performanceMetrics) {
        cout << performanceMetric.first << ": " << performanceMetric.second;
        if (performanceMetric.first[0] != 'S')cout << "%";
        cout << endl;
    }
}