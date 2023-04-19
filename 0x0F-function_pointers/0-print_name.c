#include "function_pointers.h"

/**
* print_name - print a name
* @name: string to be printed
* @f: pointer to function to be used to print `name`
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

