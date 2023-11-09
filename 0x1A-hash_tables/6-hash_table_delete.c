#include "hash_tables.h"

/**
 * free_node - Free a single hash node and its key and value.
 * @node: The hash node to free.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - Delete a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current->next;
			free_node(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
