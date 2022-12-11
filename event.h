#pragma once

#include "definition.h"

#include <string>

using namespace std;

class Event {
public:
    // 事件类别，包含market、signal、order、fill
    eventType event_type;
    // 标识策略与对应的资产组合，用于告知回测系统对哪一组持仓做更新
    int strategyID;

    virtual ~Event() = default;
};

class MarketEvent : public Event {
public:
    MarketEvent();
};

class SignalEvent : public Event {
public:
    string symbol;
    // 信号，范围在[-1,1]，< 0 表示short，> 0 表示long，绝对值代表信号强度（对某些策略可能根据强度决定交易量）
    double signal;
    // 与信号配合，交易量
    double quantity;

    SignalEvent(int strategyID, const string &symbol, double signal, double quantity);
};

class OrderEvent : public Event {
public:
    string symbol;

    double quantity;

    directionType direction;

    OrderEvent(int strategyID, const string &symbol, double quantity, directionType direction);

    // 输出order具体信息
    void logOrder();
};

class FillEvent : public Event {
public:
    string symbol;

    double quantity;

    directionType direction;

    FillEvent(int strategyID, const string &symbol, double quantity, directionType direction);
};