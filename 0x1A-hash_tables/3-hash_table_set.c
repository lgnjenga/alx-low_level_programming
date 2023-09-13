#include "hash_tables.h"

/**
 * insert_node - Inserts a new node at the beginning of a linked list.
 * @head: A pointer to the current head of the linked list.
 * @key: The key to add.
 * @value: The value to add.
 *
 * Return: The new head of the linked list.
 */
static hash_node_t *insert_node(
		hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = head;
	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key/value in.
 * @key: The key (string) to add or update.
 * @value: The value (string) associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	/* Calculate the index */
	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];

	/* Check if the key already exists, update its value, and return */
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}

	/**
	 * Insert a new node
	 * at the beginning of the linked list (collision handling)
	 */
	ht->array[index] = insert_node(ht->array[index], key, value);

	return (ht->array[index] ? 1 : 0);
}
