#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 *
 * @h: linked list of type listint_t to print
 *
 * Return: total number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current_node = h;
	size_t total_nodes = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		total_nodes++;
	}

	return (total_nodes);
}

