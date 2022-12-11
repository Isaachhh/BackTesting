#include "matching_engine.h"

using namespace std;

MatchingEngine::MatchingEngine(queue<shared_ptr<Event>> *eventQueuePtr, DataHandler *dataHandlerPtr) {
    this->eventQueuePtr = eventQueuePtr;
    this->dataHandlerPtr = dataHandlerPtr;
}

// 即时撮合，使用close成交
void MatchingEngine::match(const shared_ptr<OrderEvent> &order) {
    eventQueuePtr->push(make_shared<FillEvent>(order->strategyID, order->symbol, order->quantity, order->direction));
}