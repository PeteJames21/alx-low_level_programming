#include "main.h"

/**
* print_diagonal - print a diagonal line
*
* @n: the vertical span of the line
*/
void print_diagonal(int n)
{
	int i;
	int j;
	int num_spaces;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			num_spaces = i - 1;
			if (num_spaces >= 1)
			{
				for (j = 1; j <= num_spaces; j++)
					_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
