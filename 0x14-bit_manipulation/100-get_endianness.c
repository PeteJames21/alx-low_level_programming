#include "main.h"

/**
 * get_endianness - check the endianness of the target system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;

	/* &i points to the location of the first byte used to represent i */
	/* Casting to a char* allows us to convert this byte into a 0 or 1 */

	return (((char *)&i)[0]);
}
