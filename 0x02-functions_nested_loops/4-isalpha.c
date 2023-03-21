#include <stdio.h>

/**
* _islower - check if the provided character is an alphabet
*
* @c: character to be tested
*
* Return: 1 if character is an alphabet, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
