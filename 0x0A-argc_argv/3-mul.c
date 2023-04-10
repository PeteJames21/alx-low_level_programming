#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - multiply two integers
* @argc: number of commandline arguments
* @argv: argument vector
*
* Description: the two integers are passed as arguments to the program.
* Exactly two integer arguments must be passed.
*
* Return: 0 (success) or 1 (failure)
*/
int main(int argc, char *argv[])
{
	int a, b;
	/* Ensure that exactly 2 args are passed */
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
