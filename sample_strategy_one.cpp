#include "strategy.h"

using namespace std;

SampleStrategyOne::SampleStrategyOne(int strategyID, DataHandler *dataHandlerPtr) {
    this->strategyID = strategyID;
    this->dataHandlerPtr = dataHandlerPtr;
    this->eventQueuePtr = dataHandlerPtr->eventQueuePtr;

    for (auto &symbol: this->dataHandlerPtr->symbols) {
        this->bought[symbol] = false;
    }

}

void SampleStrategyOne::calculateSignals() {
    for (auto &symbol: dataHandlerPtr->symbols) {
        if (bought[symbol])continue;

        // 在开始时买入1单位，此后一直持有
        eventQueuePtr->push(make_shared<SignalEvent>(strategyID, symbol, 1.0, 1.0));
        bought[symbol] = true;
    }
}