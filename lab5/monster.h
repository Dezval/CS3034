#ifndef MONSTER
#define MONSTER

typedef struct monsterAttack{
    int attackID;
    char monsterName[256];
    char attackLocation[256];
    int victims;

} monsterAttack;

monsterAttack *init(monsterAttack *data);
void print(monsterAttack* monsterAttack);
int getMonsterID(monsterAttack* monsterAttack);



#endif