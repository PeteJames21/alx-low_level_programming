#ifndef _3_CALC_H
#define _3_CALC_H

/**
 * struct ops - a container for mathematical functions
 *
 * @op: operator symbol
 * @f: function associated with the operator symbol
 */
typedef struct ops
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int _putchar(char c);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
