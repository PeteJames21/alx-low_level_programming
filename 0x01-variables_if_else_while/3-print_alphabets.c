#include <stdio.h>

/**
* main - entry point
*
* Print all lowercase and uppercase letters to stdout
*
* Return: 0(success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
