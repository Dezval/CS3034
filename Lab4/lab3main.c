#include <stdio.h>
#include <malloc.h>

struct monsterAttack{
    int attackID;
    char monsterName[256];
    char attackLocation[256];
    int victims;
};

int inputForAttacks() {
    int numOfAtt;
    printf("Number of Attacks: ");
    scanf("%d", &numOfAtt);
    printf("Number of Attacks Entered: %d\n", numOfAtt);
    return numOfAtt;
}

void attInfo(struct monsterAttack *attacks, int numOfAtt){
    for(int i = 0; i < numOfAtt; i++) {
        attacks[i].attackID = i + 1;
        printf("Attack ID: \"%d\" \nAttack Location:", attacks[i].attackID);
        setbuf(stdin,NULL);
        fgets(attacks[i].attackLocation,50,stdin);

        printf("Monster Name:");
        setbuf(stdin,NULL);
        fgets(attacks[i].monsterName,50,stdin);

        printf("Number of victims: ");
        scanf("%d", &attacks[i].victims);
    }
}


void printAttackInfo(struct monsterAttack *attacks, int length){
    for(int i = 0; i < length; i++){
        printf("\nAttack info for ID: %d\n | Location: %s | Monster: %s | Victims: %d\n", (attacks+i)->attackID, (attacks+i)->attackLocation, (attacks+i)->monsterName, (attacks+i)->victims);
    }
}

void printTotalVictims(struct monsterAttack *attacks, int length){
    int totalVictims = 0;
    for(int i = 0; i < length; i++){
        totalVictims += (attacks+i)->victims;
    }
    printf("\nTotal Victims: %d\n", totalVictims);
}


int main() {
    int numOfAtt = inputForAttacks();
    struct monsterAttack *attacks = (struct monsterAttack *) malloc(numOfAtt * sizeof(struct monsterAttack));
    attInfo(attacks,numOfAtt);
    printAttackInfo(attacks,numOfAtt);
    printTotalVictims(attacks,numOfAtt);
    free(attacks);

    return 0;
}