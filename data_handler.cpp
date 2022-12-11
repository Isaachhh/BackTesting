#include "data_handler.h"

#include <sstream>
#include <fstream>
#include <unordered_set>

using namespace std;

BarData::BarData(double open, double high, double low, double close, double adjClose, double volume) {
    this->open = open;
    this->high = high;
    this->low = low;
    this->close = close;
    this->adjClose = adjClose;
    this->volume = volume;
}

DataHandler::DataHandler(queue<shared_ptr<Event>> *eventQueuePtr, const string &dataPath,
                         const vector<string> &symbols) {
    this->eventQueuePtr = eventQueuePtr;
    this->dataPath = dataPath;
    this->symbols = symbols;

    ifstream dataFile(this->dataPath, ios::binary);

    unordered_set<string> neededSymbols;
    for (auto &symbol: this->symbols) {
        neededSymbols.emplace(symbol);
        consumedData.emplace(symbol, map<long long, BarData>{});
    }

    string line;
    //  跳过第一行
    getline(dataFile, line);
    while (getline(dataFile, line)) {
        stringstream ss(line);
        vector<string> parseLine; // Timestamp,Open,High,Low,Close,Adj Close,Volume,Symbol
        string tempItem;
        while (getline(ss, tempItem, ',')) {
            parseLine.emplace_back(tempItem);
        }

        if (!neededSymbols.count(parseLine[7]))continue;

        if (!data.count(parseLine[7])) data.emplace(parseLine[7], map<long long, BarData>{});

        data[parseLine[7]].emplace(stoll(parseLine[0]),
                                   BarData(stod(parseLine[1]), stod(parseLine[2]), stod(parseLine[3]),
                                           stod(parseLine[4]), stod(parseLine[5]), stod(parseLine[6]))
        );

        bar[parseLine[7]] = data[parseLine[7]].begin();
    }
}


vector<BarData> DataHandler::getLatestBars(const string &symbol, int n) {
    vector<BarData> result;
    result.reserve(n);

    // 如果要求的条数大于已有的数据量，则尽力返回（即返回已有的全部数据）
    for (auto rit = consumedData[symbol].rbegin(); n > 0 && rit != consumedData[symbol].rend(); --n, ++rit) {
        result.emplace_back(rit->second);
    }

    return result;
}

bool DataHandler::nextBar() {
    bool nextFlag = false;

    for (auto &symbol: symbols) {
        if (bar[symbol] != data[symbol].end()) {
            consumedData[symbol].emplace(bar[symbol]->first, bar[symbol]->second);
            ++bar[symbol];
            nextFlag = true;
        }
    }
    if (nextFlag)eventQueuePtr->push(make_shared<MarketEvent>());
    return nextFlag;
}