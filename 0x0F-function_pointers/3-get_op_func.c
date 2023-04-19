#include <stdlib.h>
#include "3-calc.h"

/**
* get_op_func - map operator symbol to the right function
* @s: operator symbol. One of: +, -, /, *, %
*
* Return: pointer to a function for performing the operation, NULL if no match
*/
int (*get_op_func(char *s))(int, int)
{
	unsigned int i;
	char ops[] = {'+', '-', '*', '/', '%'};
	int (*funcs[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	int (*match)(int, int) = NULL;

	for (i = 0; i <= sizeof(ops); i++)
	{
		if (s[0] == ops[i])
			match = funcs[i];
	}

	return (match);
}
