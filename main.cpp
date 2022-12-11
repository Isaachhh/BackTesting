#include "strategy.h"
#include "portfolio.h"
#include "matching_engine.h"

#include <iostream>

using namespace std;

/*
 * 回测函数声明
 * initialCapital表示初始资金
 * dataPath为行情数据csv文件路径，格式为Timestamp,Open,High,Low,Close,Adj Close,Volume,Symbol，时间尺度为天级，要求不同标的数据保持时间戳的一致性
 * symbols包含要交易的标的代码
 */
void backTesting(double initialCapital, const string &dataPath, const vector<string> &symbols);

int main() {
    vector<string> symbols = {"Apple", "Google"};
    backTesting(1000, "../data/SampleData.csv", symbols);
    return 0;
}

/*
 * 回测函数定义
 */
void backTesting(double initialCapital, const string &dataPath, const vector<string> &symbols) {

    // 事件消息队列，event-driven回测系统
    queue<shared_ptr<Event>> eventQueue;

    // 处理行情数据的对象
    DataHandler dataHandler = DataHandler(&eventQueue, dataPath, symbols);

    // 允许回测多种策略，strategyID为vector下标
    vector<Strategy *> strategyList;
    Strategy *strategyOne = new SampleStrategyOne(0, &dataHandler);
    Strategy *strategyTwo = new SampleStrategyTwo(1, &dataHandler);
    strategyList.push_back(strategyOne);
    strategyList.push_back(strategyTwo);
    // 与策略对应的资产组合
    vector<Portfolio *> portfolioList;
    Portfolio *portfolioOne = new BasePortfolio(&dataHandler, symbols, initialCapital);
    Portfolio *portfolioTwo = new BasePortfolio(&dataHandler, symbols, initialCapital);
    portfolioList.push_back(portfolioOne);
    portfolioList.push_back(portfolioTwo);

    // 撮合引擎
    MatchingEngine matchingEngine = MatchingEngine(&eventQueue, &dataHandler);


    cout << "----------BackTest started----------" << endl << endl;


    while (dataHandler.nextBar()) {

        while (!eventQueue.empty()) {
            auto eventPtr = eventQueue.front();
            eventQueue.pop();

            switch (eventPtr->event_type) {

                case MARKET: {
                    for (auto &strategyPtr: strategyList)strategyPtr->calculateSignals();
                    for (auto &portfolioPtr: portfolioList)portfolioPtr->onMarket();
                    break;
                }

                case SIGNAL: {
                    auto signal = dynamic_pointer_cast<SignalEvent>(eventPtr);
                    portfolioList[eventPtr->strategyID]->onSignal(signal);
                    break;
                }

                case ORDER: {
                    auto order = dynamic_pointer_cast<OrderEvent>(eventPtr);
                    matchingEngine.match(order);
                    order->logOrder();
                    break;
                }

                case FILL: {
                    auto fill = dynamic_pointer_cast<FillEvent>(eventPtr);
                    portfolioList[eventPtr->strategyID]->onFill(fill);
                    portfolioList[eventPtr->strategyID]->onMarket();
                    break;
                }
            }
        }

    }

    cout << "----------BackTest ended----------" << endl << endl;

    for (int i = 0; i < portfolioList.size(); ++i) {
        cout << "[Performance Metrics of Strategy " << i << "]" << endl;
        portfolioList[i]->calculateMetrics();
        cout << endl;
    }


}
