#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: a string composed of 0's and 1's representing the binary input
 *
 * Return: the integral conversion of b, or 0 if b is of invalid format
 */
unsigned int binary_to_uint(const char *b)
{
	/* Use the doubling method for the conversion */
	unsigned int result = 0;
	const char *copy = b;

	if (!b)
		return (0);


	/* Check if `b` is a valid representation of a binary number */
	for (; *copy; copy++)
	{
		if (*copy != '0' && *copy != '1')
			return (0);
	}
	for (; *b; b++)
	{
		result = result * 2 + (*b - 48);
	}

	return (result);
}
