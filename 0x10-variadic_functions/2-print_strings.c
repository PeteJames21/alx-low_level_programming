#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - print the strings provided, followed by a separator
* @separator: string to be used as a separator
* @n: number of strings passed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *arg;
	unsigned int i;

	if (!separator)
		separator = "";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if (i != n - 1)
			if (!arg)
				printf("(nil)%s", separator);
			else
				printf("%s%s", arg, separator);
		else
			if (!arg)
				printf("(nil)");
			else
				printf("%s", arg);
	}

	va_end(args);
	printf("\n");
}

