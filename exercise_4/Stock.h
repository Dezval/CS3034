#ifndef STOCK
#define STOCK
#include <string>
#include <vector>

using namespace std;

class Stock{
		
	public:
		Stock(int month, int day, int year, string stockName, double openPrice, double closePrice);
		void showAnswers();	
		string getCSVString() const;
		
	private:
	int month, day, year;
	string stockName;
	double openPrice, closePrice;
};

#endif
