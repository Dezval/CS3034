#include <stdio.h>
#include <malloc.h>

int function(int *first, int arrayLength){
    int tmp = 0;

    for(int i = 0; i < arrayLength; i++) {
        if(first[i] < tmp ){
            tmp = first[i];
        }
    }
    return tmp;
}

int main() {
    int* myarray = (int*)malloc(sizeof(int)*10);
    myarray[0] = 1;
    myarray[1] = 5;
    myarray[2] = 3;
    myarray[3] = 4;
    myarray[4] = -10;

    printf(function(myarray,5));
    return 0;
}