#include "main.h"

/**
* swap_int - swap the value of two integer variables
*
* @a: first variable to be swapped
* @b: second variable to be swapped
*/
void swap_int(int *a, int *b)
{
	int tmp_a;

	tmp_a = *a;

	*a = *b;
	*b = tmp_a;
}
