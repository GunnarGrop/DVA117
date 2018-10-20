#include <stdio.h>
#include <string.h>
#define ITEMSIZE 20
#define UNITSIZE 10

typedef struct{
    char item[ITEMSIZE];
    float amount;
    char unit[UNITSIZE];
}groceryItem;

typedef struct{
    groceryItem ShoppingListItem[5];
    int itemsInList;
}shoppingList;

void editList(shoppingList *pGroceries);
void printList(shoppingList *pGroceries);
int checkInputForErrors(float input, int scanfOutput);

int main()
{
    int choice;
    _Bool running = 1;
    shoppingList groceries[5];

    groceries->itemsInList = 0;
    while(running){
        printf("1. Edit list.\n2. Print list.\n3. Quit.\nVad vill du göra? ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
            if(groceries->itemsInList <= 4){
                editList(&groceries[groceries->itemsInList]);
                groceries->itemsInList++;
            }else{
                printf("\nYou cannot add more items to your shopping list.\n\n");
            }
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
    system("clear");
    printf("Item: ");
    while ( getchar() != '\n' );
    gets(pGroceries->ShoppingListItem->item);

    int scanfOutput, errorCheck;
    float tmpInput;
    do{
        printf("Amount: ");
        scanfOutput = scanf("%f", &tmpInput);
        while ( getchar() != '\n' );
        errorCheck = checkInputForErrors(tmpInput, scanfOutput);
    }while(errorCheck != 0);
    pGroceries->ShoppingListItem->amount = tmpInput;

    printf("Unit: ");
    //while ( getchar() != '\n' );
    gets(pGroceries->ShoppingListItem->unit);
    printf("\n");
    system("clear");
}

void printList(shoppingList *pGroceries)
{
    system("clear");
    printf("You have %d items in you list:\n", pGroceries->itemsInList);
    for(int i = 0; i < pGroceries->itemsInList; i++){
        printf("%-15s\t%.1f%s\n",pGroceries[i].ShoppingListItem->item, pGroceries[i].ShoppingListItem->amount, pGroceries[i].ShoppingListItem->unit);
    }
    printf("\n");
}

int checkInputForErrors(float input, int scanfOutput){
    if(input < 0 || scanfOutput == 0){
        return 1;
    }else{
        return 0;
    }
}
