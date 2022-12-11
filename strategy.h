#pragma once

#include "data_handler.h"

using namespace std;

class Strategy {
public:
    int strategyID{};

    virtual void calculateSignals() = 0;
};

// buy and hold strategy
class SampleStrategyOne : public Strategy {
public:
    DataHandler *dataHandlerPtr;

    queue<shared_ptr<Event>> *eventQueuePtr;
    // 标记是否已经购买
    unordered_map<string, bool> bought;

    SampleStrategyOne(int strategyID, DataHandler *dataHandlerPtr);

    void calculateSignals();
};

// RSI strategy
class SampleStrategyTwo : public Strategy {
public:

    DataHandler *dataHandlerPtr;

    queue<shared_ptr<Event>> *eventQueuePtr;

    SampleStrategyTwo(int strategyID, DataHandler *dataHandlerPtr);

    void calculateSignals();

    ~SampleStrategyTwo();
};