#include <stdio.h>
#include <math.h>

/**************************
* Uppgift 5.1             *
* DVA117 - Programmering  *
* Av Philip Andersson     *
**************************/

float squareRoot(float *number);

int main()
{
    float inputNumber;

    printf("Räkna ut kvadratroten ur ett tal.\n");
    printf("Skriv in ett tal: ");

    scanf("%f", &inputNumber);
    float originalNumber = inputNumber;

    int sqrtReturn = squareRoot(&inputNumber);
    if(sqrtReturn == 1) {
        printf("Roten ur %.3f är %.3f. \n",originalNumber, inputNumber);
    }
    else {
        printf("Det går inte att beräkna roten ut ett negativt tal. \n");
    }

    return 0;
}

float squareRoot(float *number) {
    if (*number > 0) {
        *number = sqrt(*number);
        return 1;
    }
    else {
         return 0;
    }
}
