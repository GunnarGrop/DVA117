#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

void editList(groceryItem *pGroceries);
void printList(shoppingList *pGroceries);
int checkInputForErrors(float input, char catch, int scanfOutput);
float tryInput(char output[], char failedOutput[]);

int main(){
    _Bool running = 1;
    shoppingList groceries;
    groceries.itemsInList = 0;

    while(running){
        int choice = tryInput("1. Edit list.\n2. Print list.\n3. Quit.\nChoice: ", "\nPlease choose one.\n\n");

        switch(choice){
        case 1:
            if(groceries.itemsInList <= 4){
                editList(&groceries.ShoppingListItem[groceries.itemsInList]);
                groceries.itemsInList++;
            }else{
                printf("\nYou cannot add more items to your shopping list.\n\n");
            }
            break;
        case 2:
            printList(&groceries);
            break;
        case 3:
            running = 0;
            break;
        default:
            printf("\nPlease choose one.\n\n");
        }
    }

    return 0;
}

void editList(groceryItem *pGroceries){
    system("clear");
    printf("Item: ");
    gets(pGroceries->item);

    float tmpInput = tryInput("Amount: ", "Invalid input. Please try again.\n");
    pGroceries->amount = tmpInput;

    printf("Unit: ");
    gets(pGroceries->unit);
    printf("\n");
    system("clear");
}

void printList(shoppingList *pGroceries){
    system("clear");
    printf("You have %d items in you list:\n", pGroceries->itemsInList);
    for(int i = 0; i < pGroceries->itemsInList; i++){
        printf("%-15s\t%.1f%s\n",pGroceries->ShoppingListItem[i].item, pGroceries->ShoppingListItem[i].amount, pGroceries->ShoppingListItem[i].unit);
    }
    printf("\n");
}

/*Kollar om ett siffer-input är korrekt angivet, större än 0 och om det är
  rätt tecken efter siffran (enterslag)*/
int checkInputForErrors(float input, char catch, int scanfOutput){
    if(input < 0 || scanfOutput == 0 || catch != '\n'){
        if(catch != '\n'){
            while(getchar() != '\n');
        }
        return 1;
    }

    return 0;
}

//Försök kontinuerligt ta input från användaren
float tryInput(char output[], char failedOutput[]){
    int scanfOutput, errorCheck;
    float choice;
    char catchNewLine;

    do{
        printf(output);
        scanfOutput = scanf("%f%c", &choice, &catchNewLine);
        errorCheck = checkInputForErrors(choice, catchNewLine, scanfOutput);
        if(errorCheck != 0){
            printf(failedOutput);
        }
    }while(errorCheck != 0);

    return choice;
}
