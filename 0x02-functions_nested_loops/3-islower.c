#include <stdio.h>

/**
* _islower - check if the provided character is lowercase
*
* @c: character to be tested
*
* Return: 1 if character is lowecase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
