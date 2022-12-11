#pragma once

#include "event.h"

#include <queue>
#include <unordered_map>
#include <map>

using namespace std;

class BarData {
public:
    double open, high, low, close, adjClose, volume;

    BarData(double open, double high, double low, double close, double adjClose, double volume);
};

class DataHandler {
public:
    // 行情数据csv文件路径
    string dataPath;
    // 事件消息队列指针
    queue<shared_ptr<Event>> *eventQueuePtr;
    // 要交易的标的代码
    vector<string> symbols;
    // 读取csv文件中的数据，存储在data中，格式为<symbol, <timestamp, bardata> >
    unordered_map<string, map<long long, BarData>> data;
    // 已经被消费的数据
    unordered_map<string, map<long long, BarData>> consumedData;
    // 迭代器指向下一条待消费的数据
    unordered_map<string, map<long long, BarData>::iterator> bar;

    DataHandler(queue<shared_ptr<Event>> *eventQueuePtr, const string &dataPath, const vector<string> &symbols);

    // 返回最近n条bardata
    vector<BarData> getLatestBars(const string &symbol, int n = 1);

    // 将新的市场行情插入事件消息队列，如果没有新的数据代表回测结束，返回false
    bool nextBar();

    ~DataHandler() = default;
};