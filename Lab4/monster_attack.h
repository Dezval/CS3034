#ifndef MONSTER_ATTACK
#define MONSTER_ATTACK

typedef struct monsterAttack{
    int attackID;
    char monsterName[256];
    char attackLocation[256];
    int victims;
} monsterAttack;


#endif