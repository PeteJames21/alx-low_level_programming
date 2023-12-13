#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_array - print an array of integers
 * @array: a pointer to the first element of the array to be printed
 * @size: the number of elements in the array
*/
void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (array == NULL)
		return;

	while (i < size)
	{
		printf("%d", array[i]);
		i++;
		if (i < size)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search for an integer in an array using binary search
 * @array: a pointer to the first elment of an array of integers
 * @size: the number of elements in the array
 * @value: the integer to be located
 * Return: the index of the first occurence of @value or -1 if not found
 *
 * Description - the iterative approach is used to locate the element
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (array == NULL || size < 1)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		print_array(&array[low], high - low + 1);
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
