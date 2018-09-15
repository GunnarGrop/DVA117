#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**************************
* Uppgift 4.1             *
* DVA117 - Programmering  *
* Av Philip Andersson     *
**************************/

int fillArray(int inputArray[]);
int countElement(int inputArray[], int arraySize, int elementToCount);

int main(void) {
    int numberSearch, amountOfElement, running = 1;
    char keepRunning;

    srand(time(NULL));

    while (running) {
        int array[10];

        fillArray(array);

        for(int i = 1; i <= 10; i++) {
            printf("Tal: %d\n", array[i-1]);
        }

        printf("\nVilket tal vill du söka efter? ");
        scanf("%d", &numberSearch);

        amountOfElement = countElement(array, 10, numberSearch);
        if (amountOfElement == 1) {
            printf("Talet %d förekommer %d gång.\n", numberSearch, amountOfElement);
        }
        else {
            printf("Talet %d förekommer %d gånger.\n", numberSearch, amountOfElement);
        }

        do {
            printf("\nVill du mata in en ny sekvens (j/n)? ");
            scanf("%*c %c", &keepRunning);
        } while(keepRunning != 'j' && keepRunning != 'n');

        if(keepRunning == 'n') {
            running = 0;
        }
        else if(keepRunning == 'j') {
            system("clear");
        }
    }

    printf("Färdigt\n");
    return 0;
}

int fillArray(int inputArray[]) {
    int number;

    for(int i = 1; i <= 10; i++) {
        number = rand()%10+1;
        inputArray[i-1] = number;
    }

    return 0;
}

int countElement(int inputArray[], int arraySize, int elementToCount) {
    int amountOfElement = 0;

    for(int i = 0; i <= arraySize; i++){
        if(inputArray[i-1] == elementToCount) {
            amountOfElement++;
        }
    }

    return amountOfElement;
}
