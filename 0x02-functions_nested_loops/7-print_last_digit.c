#include "main.h"

/**
* print_last_digit - print last digit of a number
*
* @n: integer to be tested
*
* Return: an int representing the last digit of n
*/
int print_last_digit(int n)
{
	int last_digit;

	/* Get absolute value of n if n <1 */
	if (n < -1)
		n *= -1;

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
