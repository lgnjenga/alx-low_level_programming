#include "hash_tables.h"
#include <string.h>

/**
 * add_node - Add a new node to the hash table.
 * @ht: The hash table.
 * @key: The key string.
 * @value: The value to associate with the key.
 *
 * Return: The new node on success, NULL on failure.
 */
hash_node_t *add_node(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (new_node);
}

/**
 * hash_table_set - Add or update an element in the hash table.
 * @ht: The hash table to add/update the key/value in.
 * @key: The key string. It can't be an empty string.
 * @value: The value to associate with the key. It must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;

	if (!ht || !key || !*key || !value)
		return (0);

	current = ht->array[key_index((const unsigned char *)key, ht->size)];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	return (add_node(ht, key, value) ? 1 : 0);
}
