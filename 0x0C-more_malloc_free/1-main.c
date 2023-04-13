#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat1, *concat2;

    concat1 = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat1);
    free(concat1);

    concat2 = string_nconcat("Best ", "School !!!", 100);
    printf("%s\n", concat2);
    free(concat2);
    return (0);
}
