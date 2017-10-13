#include <malloc.h>
#include <stdio.h>
#include "savings.h"

savings *initialize(savings *data){
    data = (savings*)malloc(sizeof(savings));

    printf("Enter Savings Account ID: ");
    scanf("%d", &data->ID);

    printf("Account ID: \"%d\" \nBank Name:", data->ID);
    setbuf(stdin,NULL);
    fgets(data->bankName,50,stdin);

    printf("Account Name:");
    setbuf(stdin,NULL);
    fgets(data->accountName,50,stdin);

    printf("Amount in Bank Account: ");
    scanf("%d", &data->amount);

    return data;
}
void printData(savings* savingsData){
    printf("ID: %d\n", savingsData->ID);
    printf(" | Bank Name: %s", savingsData->bankName);
    printf(" | Account Name: %s", savingsData->accountName);
    printf(" | Amount: %d\n", savingsData->amount);
}

int getID(savings* savings){
    return savings->ID;
}