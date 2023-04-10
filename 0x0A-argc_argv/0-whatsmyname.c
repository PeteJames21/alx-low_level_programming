#include <stdio.h>
#include "main.h"

/**
* main - print the name of the program
* @argc: number of commandline arguments
* @argv: argument vector
*
* Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
