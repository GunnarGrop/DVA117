#include <stdio.h>
#include <string.h>

#define MAX 60

int isPalindrom(char inputString[]);

int main(void) {
    char input[MAX];

    printf("Kolla om en sträng är ett palindrom.\n");
    printf("Skriv in ett ord eller mening: ");
    gets(input);
    isPalindrom(input);

    if(isPalindrom == 0) {
        printf("\nSträngne är ett palindrom!\n");
    }
    else {
        printf("\nSträngen är inte ett palindrom.\n");
    }

    return 0;
}

int isPalindrom(char inputString[]) {
    int len = strlen(inputString), isTheSame = 0;
    char checkInput[MAX];

    for(int i = 0; i < len; i++) {
        checkInput[i] = inputString[len - 1 - i];

    }

    for(int i = 0; i < len; i++) {
        if(checkInput[i] != inputString[i]) {
            isTheSame++;
        }
    }

    if(isTheSame != 1) {
        return 1;
    }
    else {
        return 0;
    }
}
