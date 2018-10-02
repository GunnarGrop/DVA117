#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define MAX 100

int lookForWord(char inputString[], int wordNumber);

int main()
{
    char input[MAX];

    printf("Skriv in en mening: \n");
    fgets(input, MAX, stdin);

    return 0;
}

int lookForWord(char inputString[], int wordNumber) {

    for(int i = 0; i < wordNumber; i++) {
        if((isalpha(inputString[i] == 0)) && (isalpha(inputString[i + 1]) != 0)) {
            printf("Mellanslag");
        }
    }
}
