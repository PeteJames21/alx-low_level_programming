#include "main.h"

/**
* _puts - print a string
*
* @str: pointer of string to be printed
*/
void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	while (1)
	{
		c = *(str + i);
		if (c == 0)
			break;

		_putchar(c);
		i++;
	}

	_putchar('\n');
}
