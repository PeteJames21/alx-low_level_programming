#include "main.h"

/**
* print_to_98 - print all natural numbers from n to 98 inclusive
*
* @n: starting point of the count
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
