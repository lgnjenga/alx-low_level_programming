#include "lists.h"

/**
 * listint_len - returns total number of nodes
 *
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current_node = h;
	size_t total_nodes = 0;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		total_nodes++;
	}

	return (total_nodes);
}
