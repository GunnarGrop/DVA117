#include <stdio.h>
#include <string.h>

#define MAX 60

int isPalindrom(char inputString[]);

int main(void) {
    int checkReturn;
    char input[MAX];

    printf("Kolla om en sträng är ett palindrom.\n");
    printf("Skriv in ett ord eller mening: ");
    gets(input);

    checkReturn = isPalindrom(input);
    if(checkReturn == 1) {
        printf("\nSträngnen är ett palindrom!\n");
    }
    else {
        printf("\nSträngen är inte ett palindrom.\n");
    }

    return 0;
}

int isPalindrom(char inputString[]) {
    int len = strlen(inputString), isTheSame = 1;
    char checkInput[MAX];

    for(int i = 0; i < len; i++) {
        checkInput[i] = inputString[len - 1 - i];
    }

    for(int i = 0; i < len; i++) {
        if(checkInput[i] != inputString[i]) {
            isTheSame = 0;
        }
    }

    return isTheSame;
}
