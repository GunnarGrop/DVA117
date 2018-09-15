#include <stdio.h>

int main(void)
{
    int angle;

    printf("Vänligen skriv ut en vinkel mellan 0 och 180 grader:\n");
    scanf("%d", &angle);

    if(angle == 90)
        printf("Vinkeln är rät.\n");
    else if (angle < 90 && angle >= 0)
        printf("Vinkeln är spetsig.\n");
    else if (angle > 90 && <= 180)
        printf("Vinkeln är trubbig.\n");
    else
        printf("Vinkeln måste vara mellan 0 och 180!\n");

    return 0;
}