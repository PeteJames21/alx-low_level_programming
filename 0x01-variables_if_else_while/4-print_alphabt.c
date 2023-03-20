#include <stdio.h>

/**
* main - entry point
*
* Print all lowercase letters except q and e
*
* Return: 0(success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
