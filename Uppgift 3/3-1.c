#include <stdio.h>

/**************************
* Uppgift 3.1             *
* DVA117 - Programmering  *
* Av Philip Andersson     *
**************************/

float convertingCurrency(float kronor, float currencyValue) {
    return kronor / currencyValue;
}

int main(void) {
    float kronor, euro = 10.48, result;

    printf("Skriv in antalet svenska kronor du vill omvandla till euro:\n");
    scanf("%f", &kronor);
    result = convertingCurrency(kronor, euro);
    printf("%.2f kronor motsvarar %.2f euro.\n", kronor, result);

    return 0;
}
