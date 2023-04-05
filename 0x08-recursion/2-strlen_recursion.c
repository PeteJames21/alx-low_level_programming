#include "main.h"

/**
* _strlen_recursion - find the length of a string
* @s: the string to be evaluated
*
* Return: the length of s
*/
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
