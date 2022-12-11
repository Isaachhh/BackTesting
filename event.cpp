#include "event.h"

#include <iostream>

using namespace std;

MarketEvent::MarketEvent() {
    this->event_type = MARKET;
}

SignalEvent::SignalEvent(int strategyID, const string &symbol, double signal, double quantity) {
    this->event_type = SIGNAL;
    this->strategyID = strategyID;
    this->symbol = symbol;
    this->signal = signal;
    this->quantity = quantity;
}

OrderEvent::OrderEvent(int strategyID, const string &symbol, double quantity, directionType direction) {
    this->event_type = ORDER;
    this->strategyID = strategyID;
    this->symbol = symbol;
    this->quantity = quantity;
    this->direction = direction;
}

void OrderEvent::logOrder() {
    string strDirection = direction == LONG ? "LONG" : "SHORT";
    cout << "[strategy] " << strategyID << ": ORDER [symbol]" << symbol << " [direction]"
         << strDirection << " [quantity]" << quantity << endl << endl;
}

FillEvent::FillEvent(int strategyID, const string &symbol, double quantity, directionType direction) {
    this->event_type = FILL;
    this->strategyID = strategyID;
    this->symbol = symbol;
    this->quantity = quantity;
    this->direction = direction;
}


