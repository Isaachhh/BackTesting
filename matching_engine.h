#pragma once

#include "data_handler.h"

using namespace std;

class MatchingEngine {
public:
    queue<shared_ptr<Event>> *eventQueuePtr;
    DataHandler *dataHandlerPtr;

    MatchingEngine(queue<shared_ptr<Event>> *eventQueuePtr, DataHandler *dataHandlerPtr);

    void match(const shared_ptr<OrderEvent> &order);
};