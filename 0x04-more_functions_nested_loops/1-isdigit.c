#include "main.h"

/**
* _isdigit - check if the given character is a digit (0-9)
*
* @c: character to be tested
*
* Return: 1 if c is digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
