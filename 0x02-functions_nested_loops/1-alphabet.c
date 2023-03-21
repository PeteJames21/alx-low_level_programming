#include "main.h"

/**
* print_alphabet - print all ASCII lowercase letters from a-z
*
* Return: void
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
}
