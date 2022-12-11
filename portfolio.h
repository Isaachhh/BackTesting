#pragma once

#include "data_handler.h"

using namespace std;

class Portfolio {
public:
    virtual void onMarket() = 0;

    virtual void onSignal(const shared_ptr<SignalEvent> &event) = 0;

    virtual void onFill(const shared_ptr<FillEvent> &event) = 0;

    virtual void calculateMetrics() = 0;
};

class BasePortfolio : public Portfolio {
public:
    DataHandler *dataHandlerPtr;

    queue<shared_ptr<Event>> *eventQueuePtr;

    vector<string> symbols;

    double initialCapital;
    // 每个时间点的持仓头寸
    map<long long, unordered_map<string, double>> allPositions;

    unordered_map<string, double> currentPositions;
    // 每个时间点持仓的价值
    map<long long, unordered_map<string, double>> allHoldings;

    unordered_map<string, double> currentHoldings;
    // 相关统计指标
    vector<pair<string, double>> performanceMetrics;

    BasePortfolio(DataHandler *dataHandlerPtr, const vector<string> &symbols, double initialCapital);

    // 响应MarketEvent，当新的市场行情产生时，更新现有资产组合数据
    void onMarket();

    // 响应SignalEvent，生成Order
    void onSignal(const shared_ptr<SignalEvent> &event);

    // 响应FillEvent，补仓时更新数据
    void onFill(const shared_ptr<FillEvent> &event);


    // 计算相关统计指标
    void calculateMetrics();
};