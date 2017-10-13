#include <iostream>
#include <fstream>
#include <vector>

#include "Stock.h"
#include "StockStorage.h"

using namespace std;


void StockStorage::writeHardCodedStocks(){
	ofstream myFile;
	string filePath;
	string line;
	vector<Stock> Stocks;
		
	Stock firstStock (10,3,92,"Alphabet", 1425.00, 1430.00);
	Stock secondStock (10,3,92,"Apple.", 125.00, 130.00);
	Stock thirdStock (10,3,92,"Dez Corp.", 145.00, 430.00);
	Stock forthStock (10,3,92,"Starbucks", 45.00, 43.00);
	Stocks.push_back(firstStock);
	Stocks.push_back(secondStock);
	Stocks.push_back(thirdStock);
	Stocks.push_back(forthStock);
		
	cout << "Enter full file path: " ;
	cin >> filePath;
	myFile.open(filePath);

	for(Stock k: Stocks)
		myFile << k.getCSVString();
	myFile.close();
}

vector <Stock> StockStorage::readFromFile(){
	ifstream myFile;
	string filePath;
	string line;
	int mnth,dy,yr;
	double op,cp;
	string name, quest, favoriteColor;
	vector<string> tokens;
		
	cout << "Enter full file path: " ;
	cin >> filePath;
	myFile.open(filePath);
	
	if(myFile.is_open()){
		while(getline(myFile, line)){			
			
			tokens = tokenize(line);
			mnth = stoi(tokens[0]);
			dy = stoi(tokens[1]);
			yr = stoi(tokens[2]);
			op = stoi(tokens[4]);
			cp = stoi(tokens[5]);
			Stock k(mnth, dy, yr, tokens[3], op, cp);
			Stocks.push_back(k);		
			if(myFile.eof()) cout << "reached eof" << endl;		
		}
		cout << Stocks.size() << endl;
		
		myFile.close();		
	}
	else cout << "File open failed" << endl;
	cout << Stocks.size() << endl;
	return Stocks;
	
}

vector<string> StockStorage::tokenize(string in){
	// http://oopweb.com/CPP/Documents/CPPHOWTO/Volume/C++Programming-HOWTO-7.html
	vector<string> tokens;
	const string delimiter = ",";
	
	string::size_type lastPos = in.find_first_not_of(delimiter, 0);
    
    // Find first "non-delimiter".
    string::size_type pos     = in.find_first_of(delimiter, lastPos);

    while (string::npos != pos || string::npos != lastPos)
    {
        // Found a token, add it to the vector.
        tokens.push_back(in.substr(lastPos, pos - lastPos));
        // Skip delimiters.  Note the "not_of"
        lastPos = in.find_first_not_of(delimiter, pos);
        // Find next "non-delimiter"
        pos = in.find_first_of(delimiter, lastPos);
    }
    return tokens;
}
