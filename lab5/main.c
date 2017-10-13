#include <stdio.h>
#include "linked_list.h"
//#include "linked_list.c"
#include "monster.h"
#include "savings.h"

void show_menu()
{
    printf("\n--- C Linked List Demonstration --- \n\n");
    printf("0.quit\n");
    printf("1.prepend data\n");
    printf("2.append data\n");
    printf("3.search for data\n");
    printf("4.insert after data ID\n");
    printf("5.insert before data ID\n");
    printf("6.remove front node\n");
    printf("7.remove back node\n");
    printf("8.remove any node\n");
    printf("9.sort the list\n");
    printf("10.Reverse the linked list\n");
    printf("11.Display linked list info\n");
}

//void attInfo(monsterAttack *attack){
//
//
//        printf("Enter attack ID: ");
//        scanf("%d", &attack->attackID);
//
//        printf("Attack ID: \"%d\" \nAttack Location:", attack->attackID);
//        setbuf(stdin,NULL);
//        fgets(attack->attackLocation,50,stdin);
//
//        printf("Monster Name:");
//        setbuf(stdin,NULL);
//        fgets(attack->monsterName,50,stdin);
//
//        printf("Number of victims: ");
//        scanf("%d", &attack->victims);
//
//}

int main() {
    printf("Hello, World!\n");
    int command;
    int ID;

    void *(*initData)(void *data);
    int (*dataID)(void *data) = NULL;
    void (*printIt) (void *data) = NULL;
    void* data;

    printf("Please choose a struct type:\n");
    printf("1. Monster Attack\n");
    printf("2. Savings Account\n");
    scanf("%d", &command);

    node* head = NULL;
    node* tmp = NULL;

    if(command == 1){
        initData = (void *) init;
        dataID = (void *) getMonsterID;
        printIt = (void *) print;
    }else if(command == 2){
        initData = (void *) initialize;
        dataID = (void *) getID;
        printIt = (void *) printData;
    }

    do {
        show_menu();
        printf("\nEnter a command(0-10,0 to quit): ");
        scanf("%d",&command);



        switch(command)
        {
            case 1:
                printf("Please enter data to prepend: ");
//                attInfo(attackData);
                data = initData(data);
                //printIt(data);
                head = prepend(head,data);
                traverse(head,printIt);
                break;
            case 2:
                printf("Please enter data to append: ");
//                attInfo(attackData);
                data = initData(data);
                head = append(head,data);
                traverse(head,printIt);
                break;
            case 3:
                printf("Please enter the data ID to search for: ");
                scanf("%d",&ID);
                tmp = search(head,ID,dataID);
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
                printf("Enter the data ID after which you would like to insert the new data: ");
                scanf("%d",&ID);
                tmp = search(head,ID,dataID);
                if(tmp != NULL)
                {
                    printf("Enter the data to insert: ");
//                    attInfo(attackData);
                    data = initData(data);
                    head = insert_after(head,data,tmp);
                    if(head != NULL)
                        traverse(head,printIt);
                }
                else
                {
                    printf("ID %d not found.",ID);
                }
                break;
            case 5:
                printf("Enter the data ID before which you would like to insert the new data : ");
                scanf("%d",&ID);
                tmp = search(head,ID,dataID);
                if(tmp != NULL)
                {
                    printf("Enter the attack to insert: ");
//                    attInfo(attackData);
                    data = initData(data);
                    head = insert_before(head,data,tmp);

                    if(head != NULL)
                        traverse(head,printIt);
                }
                else
                {
                    printf("ID %d not found.",ID);
                }
                break;
            case 6:
                head = remove_front(head);
                if(head != NULL)
                    traverse(head,printIt);
                break;
            case 7:
                head = remove_back(head);
                if(head != NULL)
                    traverse(head,printIt);
                break;
            case 8:
                printf("Enter the data ID to remove: ");
                scanf("%d",&ID);
                tmp = search(head,ID,dataID);
                if(tmp != NULL)
                {
                    remove_any(head,tmp);
                    if(head != NULL)
                        traverse(head,printIt);
                }
                else
                {
                    printf("ID %d not found.",ID);
                }
                break;
            case 9:
                head = insertion_sort(head,dataID);
                if(head != NULL)
                    traverse(head,printIt);
                break;
            case 10:
                head = reverse(head);
                if(head != NULL)
                    traverse(head,printIt);
                break;
            case 11:
                traverse(head,printIt);
                break;
        }

    } while(command != 0);

    clear(head);
    return 0;
}