#pragma once


enum eventType {
    MARKET, SIGNAL, ORDER, FILL
};

enum directionType {
    LONG, SHORT
};

constexpr double commissionRate = 0.001;

constexpr int period = 365;