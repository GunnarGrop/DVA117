#include <stdio.h>

//Räknar ut momsen på en vara

int main(void){
    float prisIn, prisEx, prisMoms, momsDecimal;
    int momsProcent;

    printf("Skriv in priset på vara, inklusive moms: ");
    scanf("%f", &prisIn);
    printf("Skriv in moms (i procent): ");
    scanf("%d", &momsProcent);

    momsDecimal =(float) momsProcent / 100;
    momsDecimal = momsDecimal + 1;
    prisEx = prisIn / momsDecimal;
    prisMoms = prisIn - prisEx;

    printf("Priset på varan, exklusive moms, är: %.2f \n", prisEx);
    printf("Momsen på varan är: %.2f \n", prisMoms);

    return 0;
}
