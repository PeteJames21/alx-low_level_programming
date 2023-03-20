#include <stdio.h>

/**
* main - entry point
*
* Print all hex digits in lowercase
*
* Return: 0(success)
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
