#include "main.h"

/**
* _sqrt_recursion - find the natural square root of a number
* @n: integer to be tested
*
* Return: the natural square root of n, else -1 if n has no natural square root
*/
int _sqrt_recursion(int n)
{
	return (_natural_sqrt(n, 0));
}

/**
* _natural_sqrt - find the natural square root of a number
* @n: integer to be tested
* @i: test index
*
* Return: the natural square root of n, else -1 if n has no natural square root
*/
int _natural_sqrt(int n, int i)
{
	if (n < 0 )
		return (-1);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_natural_sqrt(n, i + 1));
}
