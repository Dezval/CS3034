#include <iostream>
#include <iomanip>
#include "Stock.h"

using namespace std;

	Stock::Stock(int month, int day, int year, string stockName, double openPrice, double closePrice)
			: month(month), day(day), year(year), stockName(stockName), openPrice(openPrice), closePrice(closePrice){}
		
	void Stock:: showAnswers() {
		std::cout  << "Stock: " << stockName << "; MM/DD/YY: " << month << "/" << day << "/" << year << "; Price Open: " << fixed << setprecision(2) << openPrice << "; Price Close: " << closePrice << endl;
	}

	string Stock::getCSVString() const{
		return to_string(month) + "," + to_string(day) + "," + to_string(year) + "," + stockName + "," + to_string(openPrice) + "," + to_string(closePrice) + "\n";
	}


