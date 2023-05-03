#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 *
 * @head: head of a linked list
 * @index: index of node to be returned
 *
 * Return: pointer to node, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (a == index)
			return (current);
		a++;
		current = current->next;
	}
	return (NULL);
}

