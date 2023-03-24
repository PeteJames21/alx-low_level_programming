#include "main.h"

/**
* print_square - print a square of specified size
*
* @size: the dimensions of the square
*/
void print_square(int size)
{
	int i, j;

	if (size >= 1)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');

			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
