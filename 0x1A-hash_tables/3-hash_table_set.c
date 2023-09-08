#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - add an element to the hash table
 * @ht: pointer to the hash table
 * @key: string to be used as key
 * @value: string to be used as value
 * Return: 1 on success, 0 on failure
 *
 * Description - In case of collision, a new node is added to the beginning
 * of the linked list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *tmp;

	/* None of the args should be NULL and key must not be an empty str */
	if (!ht || !key || !value || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];
	if (!node)  /* Key doesn't exist. Create a new node. */
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = (char *)key;
		node->value = (char *)value;
		node->next = NULL;
		(ht->array)[index] = node;
		return (1);
	}
	while (node)  /* Update value if key is found, else create new node. */
	{
		if (strcmp(node->key, key) == 0)
		{
			node->value = (char *)value;
			return (1);
		}
		node = node->next;
	}  /* Key not found in the linked list. Add new node to the head. */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	tmp = (ht->array)[index];  /* The head of the linked list */
	node->key = (char *)key;
	node->value = (char *)value;
	node->next = tmp;
	(ht->array)[index] = node;

	return (1);
}
