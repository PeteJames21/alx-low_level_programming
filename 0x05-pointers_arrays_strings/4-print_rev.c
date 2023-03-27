#include "main.h"

/**
* print_rev - print a string in reverse
*
* @s: pointer to the string to be printed
*/
void print_rev(char *s)
{
	/* Determine the length of the string */
	int i, length;
	char c;

	length = 0;

	while (1)
	{
		if (*(s + length) == 0)
			break;

		length++;
	}

	/* Loop through string in reverse while printing each char*/
	i = length - 1;
	while (i >= 0)
	{
		c = *(s + i);
		_putchar(c);

		i--;
	}
	_putchar('\n');
}
