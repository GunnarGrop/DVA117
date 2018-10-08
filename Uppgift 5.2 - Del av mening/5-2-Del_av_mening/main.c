#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

/**************************
* Uppgift 5.2             *
* DVA117 - Programmering  *
* Av Philip Andersson     *
**************************/

int main() {
    char input[MAX], *wordPointer, running;

    do {
        system("clear");
        printf("Skriv in en mening: \n");
        fgets(input, MAX, stdin);

        int wordCount = 1;
        for (int i = 1; i < strlen(input); i++) {
            if(!(isspace(input[i])) && isspace(input[i - 1])){
                wordCount++;
            }
            if (wordCount == 3) {
                wordPointer = &input[i];
                break;
            }
        }

        if (wordCount < 3) {
            printf("Du har skrivit in för få ord.\n");
        }
        else {
            fputs(wordPointer, stdout);
        }

        do {
            printf("\nVill du köra programmet igen? (j/n): ");
            scanf("%c", &running);
            while ((getchar()) != '\n');
        }while(running != 'j' && running != 'n');

    }while(running == 'j');

    return 0;
}
