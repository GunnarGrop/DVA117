 #include <stdio.h>

 /**************************
 * Uppgift 2.3             *
 * DVA117 - Programmering  *
 * Av Philip Andersson     *
 **************************/
 int main(void){
   int digit, sum, bigDig, smallDig, timer, restart = 1;
   float average;

   do {
     digit = 0;
     sum = 0;
     timer = 0;
     average = 0;

     printf("Skriv in ett positivt heltal:\n");
     scanf("%d", &digit);

     bigDig = digit;
     smallDig = digit;

     while (digit >= 0) {
       if (digit < smallDig){
         smallDig = digit;
       }
       if (digit > bigDig) {
         bigDig = digit;
       }

       sum = sum + digit;
       timer++;

       printf("Skriv in ett till positivt heltal:\n");
       scanf("%d", &digit);

       if (digit < 0){
         average =(float)sum / timer;
         printf("Summan av alla tal är: %d\n", sum);
         printf("Det största talet är: %d\n", bigDig);
         printf("Det minsta talet är: %d\n", smallDig);
         printf("Medelvärdet av alla tal är: %f\n", average);

         printf("Vill du starta om programmet? (1 för ja, 0 för nej)\n");
         scanf("%d", &restart);
     }
   }
 } while(restart == 1);

   return 0;
 }
