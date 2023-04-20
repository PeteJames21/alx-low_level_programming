#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - print the integers provided, followed by a separator
* @separator: string to be printed between the numbers
* @n: number of integers passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n <= 0)
		return;

	if (separator == NULL)
		separator = "";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}

	printf("\n");
	va_end(args);
}
