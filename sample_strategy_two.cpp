#include "strategy.h"
#include "ta-lib/ta_libc.h"

using namespace std;

SampleStrategyTwo::SampleStrategyTwo(int strategyID, DataHandler *dataHandlerPtr) {
    this->strategyID = strategyID;
    this->dataHandlerPtr = dataHandlerPtr;
    this->eventQueuePtr = dataHandlerPtr->eventQueuePtr;

    // 使用TA-Lib计算RSI
    TA_Initialize();
}

void SampleStrategyTwo::calculateSignals() {
    constexpr int timePeriod = 14;

    for (auto &symbol: dataHandlerPtr->symbols) {
        int direction = 0;

        vector<double> pastCloseData;

        // 需要timePeriod+1天的数据计算RSI
        auto latestBars = dataHandlerPtr->getLatestBars(symbol, timePeriod + 1);
        if (latestBars.size() < timePeriod + 1) continue;

        for (auto &bar: latestBars) pastCloseData.emplace_back(bar.adjClose);

        double rsi;
        int outBegIdx;
        int outNBElement;

        TA_RSI(0, timePeriod, pastCloseData.data(), timePeriod, &outBegIdx, &outNBElement, &rsi);


        if (rsi > 70) {
            // 如果rsi > 70卖出1单位
            direction = -1;
            eventQueuePtr->push(make_shared<SignalEvent>(this->strategyID, symbol, -1.0, 1.0));
        } else if (rsi < 30) {
            // 如果rsi < 30买入1单位
            eventQueuePtr->push(make_shared<SignalEvent>(this->strategyID, symbol, 1.0, 1.0));
        }
    }
}

SampleStrategyTwo::~SampleStrategyTwo() {
    TA_Shutdown();
}