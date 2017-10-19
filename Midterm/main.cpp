#include <iostream>

using namespace std;

int function(int *first, int arrayLength){
    int tmp = 0, tmpv = first[0];

    for(int i = 0; i < arrayLength; i++) {
        if(first[i] < tmpv ){
            tmp = i;
        }
    }
    return tmp;
}

int main() {

    int* myArray = new int[5];
    myArray[0] = 1;
    myArray[1] = 5;
    myArray[2] = 3;
    myArray[3] = 4;
    myArray[4] = -10;

    cout << function(myArray,5) << endl;

    return 0;
}