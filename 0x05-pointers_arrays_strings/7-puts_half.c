#include "main.h"

/**
* puts_half - print the second half of string
*
* @str: pointer to the string to be printed
*/
void puts_half(char *str)
{
	/* Determine the length of the string */
	int i, length;
	char c;

	length = 0;

	while (1)
	{
		if (*(str + length) == 0)
			break;

		length++;
	}

	if (length % 2 == 0)
		i = length / 2;
	else
		i = length - ((length - 1) / 2);
	/* Loop through string starting from midpoint*/
	while (i <= (length - 1))
	{
		c = *(str + i);
		_putchar(c);

		i++;
	}
	_putchar('\n');
}
