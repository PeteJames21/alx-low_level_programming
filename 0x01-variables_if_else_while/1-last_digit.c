
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - program entry point
*
* Analyze the last digit of a randomly generated number
*
* Return: 0 (success)
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Calculate the last digit of n*/
	x = n % 10;

	printf("Last digit of %d is %d and is ", n, x);

	if (x > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (x < 6)
	{
		printf("and is less than 6 ");
		if (x == 0)
		{
			printf("and is 0\n");
		}
		else
		{
			printf("and not 0\n");
		}
	}

	return (0);
}
