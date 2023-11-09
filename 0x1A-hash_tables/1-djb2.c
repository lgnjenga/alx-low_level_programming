#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The input string to be hashed.
 *
 * Return: The computed hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381; /* Initial hash value */
	int c;

	while ((c = *str++))
	{
		/* Update the hash value based on the current character */
		hash = ((hash << 5) + hash) + c; /* Equivalent to hash * 33 + c */
	}

	return (hash);
}
