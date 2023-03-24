#include "main.h"

/**
* print_line - print lines to the console
*
* @n: number of underscores to use in drawing the line
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
