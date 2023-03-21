#include "main.h"

/**
* print_to_98 - print all natural numbers from n to 98 inclusive
*
* @n: starting point of the count
*/
void print_to_98(int n)
{
	int i;

	for (i = n;;)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
		else
			break;
		/* Count up or down depending whether n is < or > 98 */
		if (n < 98)
			i++;
		else
			i--;
	}
	printf("\n");
}
