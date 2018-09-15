 #include <stdio.h>

 /**************************
 * Uppgift 2.3             *
 * DVA117 - Programmering  *
 * Av Philip Andersson     *
 **************************/
 int main(void){
   int digit, sum, bigDig, smallDig, timer = 0, choice;
   float average;

   printf("Skriv in ett positivt heltal:\n");
   scanf("%d", &digit);

   while (digit >= 0) {

     if (digit > bigDig)
       bigDig = digit;
     else if (digit < smallDig)
       smallDig = digit;

     sum = sum + digit;
     timer++;

     printf("Vill du fortsätta skriva in tal? (1 för ja, 0 för nej.)\n");
     scanf("%d", &choice);

     if (choice == 1){
      printf("Skriv in ett till positivt heltal heltal:\n");
      scanf("%d", &digit);
     }
     else if (choice == 0){
      printf("Summan av alla tal är: %d\n", sum);
      printf("Störtsa talet är: %d\n", bigDig);
      printf("Minsta talet är: %d\n", smallDig);
      average = (float) sum / timer;
      printf("Medelvärdet av alla tal är: %f\n", average);

      break;
     }

     if (digit < 0) {
       printf("Summan av alla tal är: %d\n", sum);
       printf("Störtsa talet är: %d\n", bigDig);
       printf("Minsta talet är: %d\n", smallDig);
       average = (float) sum / timer;
       printf("Medelvärdet av alla tal är: %f\n", average);

       break;
     }
   }

   return 0;
 }
