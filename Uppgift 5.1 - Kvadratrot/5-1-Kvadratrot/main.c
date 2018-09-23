#include <stdio.h>
#include <math.h>

float squareRoot(float number) {
    if (number < 0) {
        return 0;
    }
    else if (number >= 0) {
        number = sqrt(number);
        return 1;
    }
}

int main()
{
    printf("Hello World!\n");
    return 0;
}
