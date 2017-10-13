#ifndef StockSTORAGE
#define StockSTORAGE
#include <string>
#include <vector>
#include "Stock.h"

using namespace std;

class StockStorage{
	public:
		void writeHardCodedStocks();
		vector <Stock> readFromFile();
	private:
		vector<Stock> Stocks;
		vector<string> tokenize(string in);	
	};
#endif
