#ifndef EXCERSIE4_STOCKDATASTORAGE_H
#define EXCERSIE4_STOCKDATASTORAGE_H

#include <string>
#include <vector>
#include <StockPrice.h>

using namespace std;

class StockDataStorage{
public:
    void writeHardCodedKnights();
    vector <StockPrice> readFromFile();
private:
    vector<StockPrice> knights;
    vector<string> tokenize(string in);
};



#endif