#ifndef EXCERSIE4_STOCKPRICE_H
#define EXCERSIE4_STOCKPRICE_H

#include <string>
#include <vector>

using namespace std;

class StockPrice {

public:

    StockPrice(int month, int day, int year, string stockName, double openPrice, double closePrice);
    void showAnswers();
    string getCSVString() const;

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

    int getYear() const;

    void setYear(int year);

    const string &getStockName() const;

    void setStockName(const string &stockName);

    double getOpeningPrice() const;

    void setOpeningPrice(double openingPrice);

    double getClosingPrice() const;

    void setClosingPrice(double closingPrice);

private:

    int month, day, year;
    string stockName;
    double openingPrice, closingPrice;
};


#endif
