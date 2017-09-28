#include <stdio.h>
#include <malloc.h>
#include "header.h"

void printArray(double *array, int length){
    printf("Array: [");
    for (int i = 0; i < length; ++i) {
        if(i == length - 1)
            printf("%lf",*(array+i));
        else
            printf("%lf, ",*(array+i));
    }
    printf("]\n");
}

void inputArray(double *array, int length){
    for (int i = 0; i < length; i++) {
        printf("Enter input for value %i: " , (i+1));
        scanf("%lf", (array+i));
        printf("For i:%d, You entered: %lf", i, *(array+i));

    }
    printf("\n");
}

void reciprocalArray(double *array, int length){
    double tmp;
    printf("Reciprocal Array: [");
    for (int i = 0; i < length; ++i) {
        tmp = 1 / *(array+i);
        array[i] = tmp;
        if(i == length - 1)
            printf("%lf",*(array+i));
        else
            printf("%lf, ",*(array+i));
    }
    printf("]\n");
}

void copyDoubleArray(double *array, double *array2, int length){
    for (int i = 0; i < length; ++i) {
        array2[i] = array[i];
    }
}

int main() {

    int arraySize = 10;
    double *p = (double*) malloc(sizeof(double)*arraySize);
    double *p2 = (double*) malloc(sizeof(double)*arraySize);


    inputArray(p,arraySize);
    printf("\nArray 1: ");
    printArray(p,arraySize);
    copyDoubleArray(p,p2,arraySize);
    printf("\nArray 2: ");
    printArray(p2,arraySize);
    reciprocalArray(p2,arraySize);

    printf("\nOriginal ");
    printArray(p,arraySize);
    printf("\nReciprocal ");
    printArray(p2,arraySize);


    free(p);
    free(p2);
    return 0;
}