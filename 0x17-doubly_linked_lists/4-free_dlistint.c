#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
