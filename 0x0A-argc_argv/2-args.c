#include <stdio.h>
#include "main.h"

/**
* main - print all the args passed to the program
* @argc: number of commandline arguments
* @argv: argument vector
*
* Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
