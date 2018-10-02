#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 60

/**************************
* Uppgift 4.2             *
* DVA117 - Programmering  *
* Av Philip Andersson     *
**************************/

int isPalindrome(char inputString[]);
void excludeNonAlpha(char inputString[]);
void convertToLowercase(char inputString[]);

int main(void) {
    int checkReturn, running = 1;
    char input[MAX], keepRunning;

    while (running) {
        printf("Kolla om en sträng är en palindrom.\n");
        printf("Skriv in ett ord eller mening: \n");
        gets(input);

        excludeNonAlpha(input);
        convertToLowercase(input);

        checkReturn = isPalindrome(input);
        if(checkReturn == 1) {
            printf("\nSträngnen är en palindrom!\n");
        }
        else {
            printf("\nSträngnen är inte en palindrom.\n");
        }

        puts(input);

        do {
            printf("\nVill du köra programet igen? (j/n)\n");
            scanf("%c", &keepRunning);
            while (getchar() != '\n'); //Rensar bufferten???
        } while(keepRunning != 'j' && keepRunning != 'n');

        if(keepRunning == 'n') {
            running = 0;
        }
        else if(keepRunning == 'j') {
            system("clear");
        }
    }

    return 0;
}

//Kollar om en sträng är ett palindrom
int isPalindrome(char inputString[]) {
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

//Exluderar icke-alfabetiska tecken i inputString[]
void excludeNonAlpha(char inputString[]) {
    int position = 0, len = strlen(inputString);
    char alphaString[MAX];

    for(int i = 0; i < len; i++) {
        if(isalpha(inputString[i]) != 0) {
            alphaString[position] = inputString[i];
            position++;
        }
    }

    /*Om sista tecknet i alphaString[] inte är alfabetiskt
      sätts den till '\0', alltså sluttecknet.                                 */
    int alphaLen = strlen(alphaString);
    if (isalpha(alphaString[alphaLen - 1]) == 0) {
        alphaString[alphaLen - 1] = '\0';
    }

    for(int i = 0; i < len; i++) {
        inputString[i] = alphaString[i];
    }
}

//Omvandlar alla versaler i inputString[] till gemener
void convertToLowercase(char inputString[]) {
    int len = strlen(inputString);
    char lowercaseString[MAX];

    for(int i = 0; i < len; i++) {
        lowercaseString[i] = tolower(inputString[i]);
    }

    for(int i = 0; i < len; i++) {
        inputString[i] = lowercaseString[i];
    }
}
