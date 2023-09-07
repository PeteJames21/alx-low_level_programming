#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash_table
 * @size: number of entries in the hash table
 * Return: a pointer to the hash table or NULL if an error occured
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = NULL;
	hash_node_t **hash_node_array = NULL;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	hash_node_array = malloc(size * sizeof(hash_node_t *));
	if (!hash_node_array)
	{
		free(table);
		return (NULL);
	}
	/* Initialize all buckets in the array to NULL */
	for (i = 0; i < size; i++)
		hash_node_array[i] = NULL;

	table->array = hash_node_array;
	table->size = size;

	return (table);
}
