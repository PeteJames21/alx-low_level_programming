#include "main.h"

/**
* reverse_array - reverse an array of integers
* @a: array to be reversed
* @n: number of elements in `a`
*
* Return: the reversed array
*/
void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
