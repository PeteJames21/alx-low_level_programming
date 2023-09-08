#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print all key/value pairs in a hash table
 * @ht: pointer to the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int is_first = 1;
	hash_node_t *node;

	if (!ht || !(ht->array))
		return;

	printf("{");

	/* Print all key/value pairs in the hash table array and collision chains */
	for (i = 0; i < (ht->size); i++)
	{
		node = (ht->array)[i];

		while (node)
		{
			if (is_first == 1)  /* is first element to be printed */
			{
				printf("%s: %s", node->key, node->value);
				is_first = 0;
			}
			else
				printf(", %s: %s", node->key, node->value);
			node = node->next;
		}
	}

	printf("}\n");
}
