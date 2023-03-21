#include "main.h"

/**
* print_alphabet_x10 - print all lowercase letters 10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int rep;
	char c;

	for (rep = 1; rep <= 10; rep++)
	{
		for (c = 'a'; c <= 'z'; c++)
			putchar(c);

		putchar('\n');
	}
}
