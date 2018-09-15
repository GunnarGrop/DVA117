#include <stdio.h>

int main(void){
    int a, b, sum;

    printf("Vänligen skriv in ett heltal: ");
    scanf("%d", &a);
    printf("Skriv in ett till heltal: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Summan av de två heltalen är %d. \n", sum);

    return 0;
}
