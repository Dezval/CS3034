#include "StockPrice.h"

#include <iostream>

using namespace std;

StockPrice::StockPrice(int month, int day, int year, string stockName, double openPrice, double closePrice){
    this->month = month;
    this->day = day;
    this->year = year;
    this->stockName = stockName;
    this->openingPrice = openPrice;
    this->closingPrice = closePrice;
}

void StockPrice:: showAnswers() {
    std::cout  << "Stock: " << stockName << "; MM/DD/YY: " << month << "/" << day << "/" << year << "; Price Open: " << openingPrice << "; Price Close: " << closingPrice << endl;
}

string StockPrice::getCSVString() const{
    return to_string(num) + "," + name + "," + quest + "," + favoriteColor + "\n";
}

int StockPrice::getMonth() const {
    return month;
}

void StockPrice::setMonth(int month) {
    StockPrice::month = month;
}

int StockPrice::getDay() const {
    return day;
}

void StockPrice::setDay(int day) {
    StockPrice::day = day;
}

int StockPrice::getYear() const {
    return year;
}

void StockPrice::setYear(int year) {
    StockPrice::year = year;
}

const string &StockPrice::getStockName() const {
    return stockName;
}

void StockPrice::setStockName(const string &stockName) {
    StockPrice::stockName = stockName;
}

double StockPrice::getOpeningPrice() const {
    return openingPrice;
}

void StockPrice::setOpeningPrice(double openingPrice) {
    StockPrice::openingPrice = openingPrice;
}

double StockPrice::getClosingPrice() const {
    return closingPrice;
}

void StockPrice::setClosingPrice(double closingPrice) {
    StockPrice::closingPrice = closingPrice;
}
