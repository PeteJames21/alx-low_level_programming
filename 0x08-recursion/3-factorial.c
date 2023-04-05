#include "main.h"

/**
* factorial - computer the factorial of a number
* @n: a positive integer to be evaluated
*
* Return: the factorial of n, or -1 if n < 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
