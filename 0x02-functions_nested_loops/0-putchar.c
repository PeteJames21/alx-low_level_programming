#include <stdio.h>
#include <string.h>

/**
* main - print text using while loop
*
* Return: 0 (success)
*/
int main(void)
{
	int i;
	char text[20] = "_putchar";

	for (i = 0; i < (int)strlen(text); i++)
	{
		putchar(text[i]);
	}

	putchar('\n');

	return (0);
}
