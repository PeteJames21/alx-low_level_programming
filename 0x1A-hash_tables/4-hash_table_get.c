#include "hash_tables.h"
#include "stdlib.h"
#include <string.h>

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: pointer to the hash table
 * @key: key to be searched for
 * Return: the value associated with the key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];
	if (!node)
		return (NULL);

	/* Search for key in both the hash table array and collision chain */
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);  /* Key not found */
}
