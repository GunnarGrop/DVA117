#include <stdio.h>

#define MAX 100
#define MAXNUMBER 1000

void lookForMostFrequent(int inputArray[MAX], int *number,int *frequency);

int main(){
    int input[MAX], mostFrequentNumber, frequencyAmount;

    printf("Vänligen mata in tal mellan 0-1000 (max 100st). Avsluta med ett negativt tal.\n");

    for(int i = 0, tmp = 0; i < MAX && tmp >= 0; i++){
        scanf("%d", &tmp);
        input[i] = tmp;
    }

    lookForMostFrequent(input, &mostFrequentNumber, &frequencyAmount);
    printf("\nTalet %d förekommer flest gånger, totalt %d gånger.\n", mostFrequentNumber, frequencyAmount);

    return 0;
}

void lookForMostFrequent(int inputArray[MAX], int *number,int *frequency){
    int tmpFrequency, mostFrequentNumber, frequencyAmount;

    //Går igenom alla tal, 0 till MAXNUMBER
    for(int i = 0; i <= MAXNUMBER; i++){
        tmpFrequency = 0;

        /*Går igenom alla positioner i inputArray och kollar om
        ett tal förkommer fler gånger*/
        for(int j = 0; j < MAX && inputArray[j] >= 0; j++){
            if(inputArray[j] == i){
                tmpFrequency++;
            }
        }

        if(tmpFrequency > frequencyAmount){
            frequencyAmount = tmpFrequency;
            mostFrequentNumber = i;
        }
    }
    *frequency = frequencyAmount;
    *number = mostFrequentNumber;
}
