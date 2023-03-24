#include "main.h"

/**
* more_numbers - print the mumbers 0-14 10 times
*/
void more_numbers(void)
{
	int i;
	int n;

	for (n = 1; n <= 10; n++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('1');

			_putchar('0' + i % 10);
		}

		_putchar('\n');
	}
}
