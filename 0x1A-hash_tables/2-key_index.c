#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array.
 * @key: The key to be hashed.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);

	/* Use the djb2 hash function */
	hash = hash_djb2(key);

	/* Return the index in the range [0, size-1] */
	return (hash % size);
}
