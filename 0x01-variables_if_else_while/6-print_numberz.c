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
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}
