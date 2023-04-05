#include "main.h"

/**
* _pow_recursion - compute the power of a number
* @x: the base number
* @y: the exponent
*
* Return: the result of x**y if x > 0, else -1
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
