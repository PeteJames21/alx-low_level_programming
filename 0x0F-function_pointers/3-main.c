#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
* main - perform calculations based on arguments passed to the program
* @argc: number of commandline arguments
* @argv: argument vector
*
* Return: exit status code
*/
int main(int argc, char *argv[])
{
	int (*op)(int, int);
	char *symbol;
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert numeric arguments to integers */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* Get operator function */
	symbol = argv[2];
	op = get_op_func(symbol);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	/* Perform calculation and print the result */
	result = op(a, b);
	printf("%d\n", result);

	return (0);
}
