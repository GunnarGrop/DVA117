#include <stdio.h>

/**************************
* Uppgift 2.2             *
* DVA117 - Programmering  *
* Av Philip Andersson     *
**************************/
int main(void)
{
  int digit;

  printf("Skriv in en siffra mellan 0 och 5:\n");
  scanf("%d", &digit);

  switch (digit) {
    case 0:
      printf("-----\n"); break;
    case 1:
      printf(".----\n"); break;
    case 2:
      printf("..---\n"); break;
    case 3:
      printf("...--\n"); break;
    case 4:
      printf("....-\n"); break;
    case 5:
      printf(".....\n"); break;
    default:
      printf("Du måste skriva in ett tal mellan 0 och 5!\n");
  }

  return 0;
}
