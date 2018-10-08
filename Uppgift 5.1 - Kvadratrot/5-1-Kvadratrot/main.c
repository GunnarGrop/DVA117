#include <stdio.h>
#include <math.h>

/**************************
* Uppgift 5.1             *
* DVA117 - Programmering  *
* Av Philip Andersson     *
**************************/

float squareRoot(float number, float *result);

int main()
{
    float inputNumber, *result;
    result = &inputNumber;

    printf("Räkna ut kvadratroten ur ett tal.\n");
    printf("Skriv in ett tal: ");

    scanf("%f", &inputNumber);
    float originalNumber = inputNumber;

    int sqrtReturn = squareRoot(inputNumber, result);
    if(sqrtReturn == 1) {
        printf("Roten ur %.3f är %.3f. \n",originalNumber, inputNumber);
    }
    else {
        printf("Det går inte att beräkna roten ut ett negativt tal. \n");
    }

    return 0;
}

float squareRoot(float number, float *result) {
    if (number > 0) {
        *result = sqrt(number);
        return 1;
    }
    else {
         return 0;
    }
}
