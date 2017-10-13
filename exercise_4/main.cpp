#include <iostream>
#include <fstream>
#include <vector>
#include "Stock.cpp"
#include "StockStorage.cpp"

using namespace std;


int main(){
    int choice;
    StockStorage s;
    cout << "Enter 1 to write to file, 2 to read from file " << endl;
    cin >> choice;
    if(choice == 1) s.writeHardCodedStocks();
    if(choice == 2)
        for(Stock k: s.readFromFile())
            k.showAnswers();
    return 0;

}

