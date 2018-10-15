#include <stdio.h>

void checkNumber(int input[], int *highestNumber, int *highestCount);

int main(void)
{
	int input[1001], highestNumber, highestCount = 0;

	for (int i = 0; i <= 1000; i++)
		input[i] = 0;

	for (int x = 0, i = 0; i < 100 && x >= 0; i++)
	{
		printf("Enter an number: ");
		scanf("%d", &x);

		if (x >= 0 && x <= 1000)
			input[x]++;
		else if (x > 1000)
			printf("\nYour input does not range between 0-1000");
		else
			break;
	}

	checkNumber(input, &highestNumber, &highestCount);

	printf("\n\nThe number %d occurred %d time(s)", highestNumber, highestCount);

	return 0;
}

void checkNumber(int input[], int *highestNumber, int *highestCount)
{
	for (int i = 0; i <= 1000; i++)
	{
		if (input[i] > *highestCount)
		{
			*highestNumber = i;
			*highestCount = input[i];
		}
	}
}
