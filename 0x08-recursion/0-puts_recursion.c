#include "main.h"

/**
* _puts_recursion - print every character in a string recursively
* @s: string to be printed
*/
void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');  /* End of string reached */
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
