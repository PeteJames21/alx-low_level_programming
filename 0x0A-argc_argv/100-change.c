#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - get the minimum number of coins to make change for an amount of money.
* @argc: number of commandline arguments
* @argv: argument vector
*
* Description: 25, 10, 5, 2, and 1 cent are the only coins available.
* Print the min number of coins needed to make change using the given amount.
* Exactly 1 argument must be passed, else 'Error' is printed.
*
* Return: 0 (success) or 1 (failure)
*/
int main(int argc, char *argv[])
{
	int denominations[5] = {25, 10, 5, 2, 1};
	int i;
	long coins, rem, arg, num_coins = 0;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* Attempt to convert the argument to a base 10 integer */
	arg = strtol(argv[1], &ptr, 10);
	if (*ptr)  /* `arg` is not an integer */
	{
		printf("Error\n");
		return (1);
	}
	if (arg < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		coins = arg / denominations[i];
		rem = arg % denominations[i];

		if (coins > 0)
		{
			num_coins += coins;
		}
		if (rem == 0)
		{
			printf("%ld\n", num_coins);
			break;
		}
		arg = rem;
	}
	return (0);
}
