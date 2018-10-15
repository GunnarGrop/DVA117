#include <stdio.h>

typedef struct{
    char item[20];
    float amount;
    char unit[10];
}shoppingList;

void editList(shoppingList *pGroceries);
void printList(shoppingList *pGroceries);
int quit(int running);

int main()
{
    int choice;
    _Bool running = 1;

    shoppingList groceries[5];

    printf("1. Edit list.\n2. Print list.\n3. Quit.\nVad vill du göra? ");

    int listNumber = 0;
    while(running){
        scanf("%d", &choice);
        switch(choice){
        case 1:
            editList(&groceries[listNumber]);
            listNumber++;
            break;
        case 2:
            printList(groceries);
            break;
        case 3:
            running = 0;
        default:
            printf("Please choose one.");
        }
    }

    return 0;
}

void editList(shoppingList *pGroceries)
{
    printf("\nItem: ");
    scanf("%s", pGroceries->item);

    printf("Amount: ");
    scanf("%.2f", pGroceries->amount);

    printf("Unit: ");
    scanf("%s", pGroceries->unit);
}

void printList(shoppingList *pGroceries)
{
    for(int i = 0; i < 5; i++){
        printf("%s", *(pGroceries+i)->item);
        printf("%s", pGroceries[i].item);
        //printf("%f", *(pGroceries+i)->amount);
        printf("%s", *(pGroceries+i)->unit);
    }
}
