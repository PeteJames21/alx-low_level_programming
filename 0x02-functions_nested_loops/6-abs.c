#include "main.h"

/**
* _abs - compute the absolute value of an integer
*
* @n: integer whose absolute value is to be computed
*
* Return: the absolute value of n
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
