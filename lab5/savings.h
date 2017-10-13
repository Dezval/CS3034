#ifndef SAVINGS_H
#define SAVINGS_H


typedef struct savings{
    int ID;
    char accountName[256];
    char bankName[256];
    int amount;
} savings;

savings *initialize(savings *data);
void printData(savings* savingsData);
int getID(savings* savings);


#endif
