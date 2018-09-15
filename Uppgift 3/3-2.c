#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**************************
* Uppgift 3.2             *
* DVA117 - Programmering  *
* Av Philip Andersson     *
**************************/

//Generer ett slumptal mellan 1 till 100
int randomNumber() {
    int number = rand()%100+1;
    return number;
}

int main(void) {
    int number, answer, gameOver = 0, timer = 0;
    srand(time(NULL));
    number = randomNumber();

    printf("Jag tänker på ett nummer, gissa vilket!\n");

    while (gameOver == 0) {
        scanf("%d", &answer);
        while (answer < 1 || answer > 100) {
            printf("Ett tal mellan 1 och 100 sa jag.\n");
            scanf("%d", &answer);
        }
        
        timer ++;

        if (answer < number) {
            printf("Större!\n");
        }
        else if (answer > number) {
            printf("Mindre!\n");
        }
        else if (answer == number) {
            printf("Grattis! Du gissade rätt. Svaret var %d.\n", answer);
            printf("Det tog bara %d försök!\n", timer);
            printf("Vill du spela igen? (0 för ja, 1 för nej)\n");
            scanf("%d", &gameOver);

            while (gameOver != 0 && gameOver != 1) {
                printf("Vänligen tryck 0 eller 1.\n");
                scanf("%d", &gameOver);
            }
            //Återställer spelet
            if (gameOver == 0) {
                number = randomNumber();
                answer = 0;
                timer = 0;
                system("clear");
                printf("Jag tänker på ett nummer, gissa vilket!\n");
            }
            else if (gameOver == 1) {
                printf("Tack för att du spelade!\n");
            }
        }
    }

    return 0;
}
