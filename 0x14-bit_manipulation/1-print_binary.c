#include "main.h"


/**
 * _print_binary - print the binary representation of an integer
 * @n: integer to be converted
 */
void _print_binary(unsigned long int n)
{
	unsigned int lsb;

	/* Print the least significant bit and perform a right shift by 1 */
	/* Stop printing once only zeros are left in n */
	if (n == 0)
		return;

	lsb = n & 1;

	_print_binary(n >> 1);

	_putchar(lsb + 48);

}

/**
 * print_binary - print the binary representation of an integer
 * @n: integer to be converted
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_print_binary(n);
}
