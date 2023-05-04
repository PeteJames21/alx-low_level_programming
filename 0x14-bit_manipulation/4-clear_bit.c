#include "main.h"

/**
* clear_bit - set the value of a bit to 0 at a given index.
* @n: pointer to the number to be manipulated
* @index: index of bit of interest (righmost bit has index 0)
*
* Return: 1 if the operation is successful, -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Guard against out-of-range indexes */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
