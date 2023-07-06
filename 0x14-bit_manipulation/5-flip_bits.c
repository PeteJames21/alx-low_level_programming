#include "main.h"

/**
 * flip_bits - get number of bits needed to be flipped to convert n to m
 * @n: integer to be converted from
 * @m: integer to be convered to
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	/* Perform right shifts on n and m while comparing the LSBs */
	/* Stop when both n and m become zero */

	while (n != 0 || m != 0)
	{
		/* Check if the least significant bits are equal */
		if ((n & 1) != (m & 1))
			count += 1;

		n >>= 1;
		m >>= 1;
	}

	return (count);
}
