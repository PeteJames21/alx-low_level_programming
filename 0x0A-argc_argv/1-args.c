#include <stdio.h>
#include "main.h"

/**
* main - print the number of args passed to the program
* @argc: number of commandline arguments
* @argv: argument vector
*
* Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
