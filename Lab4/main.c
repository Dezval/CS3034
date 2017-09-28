#include <stdio.h>
#include "linked_list.h"
#include "linked_list.c"
#include "monster_attack.h"

void show_menu()
{
    printf("\n--- C Linked List Demonstration --- \n\n");
    printf("0.quit\n");
    printf("1.prepend a monster attack\n");
    printf("2.append a monster attack\n");
    printf("3.search for a monster attack\n");
    printf("4.insert after a monster attack\n");
    printf("5.insert before a monster attack\n");
    printf("6.remove front node\n");
    printf("7.remove back node\n");
    printf("8.remove any node\n");
    printf("9.sort the list\n");
    printf("10.Reverse the linked list\n");
    printf("11.Display linked list info\n");
}

void attInfo(monsterAttack *attack){


        printf("Enter attack ID: ");
        scanf("%d", &attack->attackID);

        printf("Attack ID: \"%d\" \nAttack Location:", attack->attackID);
        setbuf(stdin,NULL);
        fgets(attack->attackLocation,50,stdin);

        printf("Monster Name:");
        setbuf(stdin,NULL);
        fgets(attack->monsterName,50,stdin);

        printf("Number of victims: ");
        scanf("%d", &attack->victims);

}

//void printAttackInfo(struct monsterAttack *attacks){
//
//    printf("\nAttack info for ID: %d\n | Location: %s | Monster: %s | Victims: %d\n", (attacks)->attackID, (attacks)->attackLocation, (attacks)->monsterName, (attacks)->victims);
//
//}

int main() {
    printf("Hello, World!\n");
    int command;
    int ID;
    monsterAttack *attackData = (monsterAttack*)malloc(sizeof(monsterAttack));;

    node* head = NULL;
    node* tmp = NULL;

    do {
        show_menu();
        printf("\nEnter a command(0-10,0 to quit): ");
        scanf("%d",&command);

        switch(command)
        {
            case 1:
                printf("Please enter an attack to prepend: ");
                attInfo(attackData);
                head = prepend(head,*attackData);
                traverse(head);
                break;
            case 2:
                printf("Please enter an attack to append: ");
                attInfo(attackData);
                head = append(head,*attackData);
                traverse(head);
                break;
            case 3:
                printf("Please enter an attack ID to search: ");
                scanf("%d",&ID);
                tmp = search(head,ID);
                if(tmp != NULL)
                {
                    printf("Element with value %d found.",ID);
                }
                else
                {
                    printf("Element with value %d not found.",ID);
                }
                break;
            case 4:
                printf("Enter the attack ID after which you would like to insert the new attack: ");
                scanf("%d",&ID);
                tmp = search(head,ID);
                if(tmp != NULL)
                {
                    printf("Enter the attack to insert: ");
                    attInfo(attackData);
                    head = insert_after(head,*attackData,tmp);
                    if(head != NULL)
                        traverse(head);
                }
                else
                {
                    printf("ID %d not found.",ID);
                }
                break;
            case 5:
                printf("Enter the attack ID before which you would like to insert a new attack: ");
                scanf("%d",&ID);
                tmp = search(head,ID);
                if(tmp != NULL)
                {
                    printf("Enter the attack to insert: ");
                    attInfo(attackData);
                    head = insert_before(head,*attackData,tmp);

                    if(head != NULL)
                        traverse(head);
                }
                else
                {
                    printf("ID %d not found.",ID);
                }
                break;
            case 6:
                head = remove_front(head);
                if(head != NULL)
                    traverse(head);
                break;
            case 7:
                head = remove_back(head);
                if(head != NULL)
                    traverse(head);
                break;
            case 8:
                printf("Enter the attack ID to remove: ");
                scanf("%d",&ID);
                tmp = search(head,ID);
                if(tmp != NULL)
                {
                    remove_any(head,tmp);
                    if(head != NULL)
                        traverse(head);
                }
                else
                {
                    printf("ID %d not found.",ID);
                }
                break;
            case 9:
                head = insertion_sort(head);
                if(head != NULL)
                    traverse(head);
                break;
            case 10:
                head = reverse(head);
                if(head != NULL)
                    traverse(head);
                break;
            case 11:
                traverse(head);
                break;
        }

    } while(command != 0);
    clear(head);
    return 0;
}