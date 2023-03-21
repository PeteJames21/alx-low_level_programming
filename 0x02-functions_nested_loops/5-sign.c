#include "main.h"

/**
* print_sign - determine whether a number is 0, positive, or negative
*
* @n: integer to be tested
*
* Return: 1 if n positive, 0 if zero, and -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
