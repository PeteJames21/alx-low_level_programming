#include <stdio.h>

/**
* main - entry point
*
* Print all numbers from 0-9 using putchar
*
* Return: 0(success)
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
