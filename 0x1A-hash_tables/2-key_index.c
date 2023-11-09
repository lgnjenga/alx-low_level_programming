#include "hash_tables.h"

/**
 * key_index - Calculate the index for a given key in the hash table.
 * @key: The key string.
 * @size: The size of the hash table's array.
 *
 * Return: The index where the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the djb2 hash function */
	hash_value = hash_djb2(key);

	/* Calculate the index by taking the modulo of the hash value with the size */
	return (hash_value % size);
}
