#include "hash_tables.h"

/**
 * key_index - Compute the index of a key in the hash table
 * @key: key of the data to be stored
 * @size: the size of the array of the hash table
 * Return: the index of the key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Perform mod on djb2 hash to ensure the result is <= size */
	return (hash_djb2(key) % size);
}
