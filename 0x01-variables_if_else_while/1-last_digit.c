
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
		printf("greater than 5\n");
	}
	else if (x < 6 && x != 0)
	{
		printf("less than 6 and not 0\n");
	}
	else if (x < 6 && x == 0)
	{
		printf("0\n");
	}
	return (0);
}
