#include "main.h"

/**
* set_string - set the value of a pointer to a char
* @to: pointer to the pointer to the string variable to be set
* @s: the string to assign to s
*/
void set_string(char **s, char *to)
{
	*s = to;
}
