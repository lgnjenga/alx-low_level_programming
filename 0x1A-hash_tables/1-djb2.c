#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 hash algorithm.
 * @str: The string to hash.
 *
 * Return: The hash value generated from the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	/* Initialize the hash value */
	unsigned long int hash = 5381;

	while (*str)
	{
		/* hash * 33 + c */
		hash = ((hash << 5) + hash) + *str;
		str++;
	}

	return (hash);
}
