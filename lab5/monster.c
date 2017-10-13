#include <malloc.h>
#include <stdio.h>
#include "monster.h"

monsterAttack *init(monsterAttack *data){
    data = (monsterAttack*)malloc(sizeof(monsterAttack));

    printf("Enter attack ID: ");
    scanf("%d", &data->attackID);

    printf("Attack ID: \"%d\" \nAttack Location:", data->attackID);
    setbuf(stdin,NULL);
    fgets(data->attackLocation,50,stdin);

    printf("Monster Name:");
    setbuf(stdin,NULL);
    fgets(data->monsterName,50,stdin);

    printf("Number of victims: ");
    scanf("%d", &data->victims);

    return data;
}

void print(monsterAttack* data){
    printf("Displaying DATA:\n");
    printf("ID: %d\n", data->attackID);
    printf(" | Location: %s", data->attackLocation);
    printf(" | Monster: %s", data->monsterName);
    printf(" | Victims: %d\n", data->victims);
}

int getMonsterID(monsterAttack* monsterAttack){
    return monsterAttack->attackID;
}

