#include "main.h"

/**
 * get_bit - get the bit at specified index starting from 0 (rightmost)
 * @n: integer to be evaluated
 * @index: index of the bit to be obtained
 *
 * Return: the bit of interest or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	/* Shift n by `index` and get the resulting least significant bit */
	return ((n >> index) & 1);
}
