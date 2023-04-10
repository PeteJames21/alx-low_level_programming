#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - compute the sum of positive integers
* @argc: number of commandline arguments
* @argv: argument vector
*
* Description: the integers are passed as arguments to the program.
* '0' is printed if no args are passed, else the sum is printed.
* 'Error' is printed if any of the args are not positive integers.
*
* Return: 0 (success) or 1 (failure)
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!string_is_numeric(argv[i]))
		{
			printf("Error\n");

			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
* string_is_numeric - check if string is only composed of numerical characters
* @s: pointer to the string to be checked
*
* Return: 1 if all chars in s are digits, 0 otherwise
*/
int string_is_numeric(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);

		s++;
	}

	return (1);
}

