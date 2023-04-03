#include "main.h"


/**
* _strstr - locate the first occurrence of a substring
* @haystack: string to be searched
* @needle: the substring to be located in haystack
*
* Return: pointer to the beginning of the located substring, NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *c;
	int i;
	int match;

	for (c = haystack; *c != '\0'; c++)
	{
		for (i = 0; needle[i]; i++)
		{
			if (c[i] != needle[i])
			{
				match = 0;
				break;
			}
			match = 1;
		}

		if (match)
			return (c);
	}

	return (NULL);
}

