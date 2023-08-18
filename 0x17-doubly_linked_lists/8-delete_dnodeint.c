#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: double pointer to the head of the doubly linked list
 * @index: index of the node that should be deleted, starting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (!head || !(*head))
		return (-1);

	current = *head;

	/* If index is 0, delete the first node */
	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse the list to the desired node */
	while (current && count < index)
	{
		current = current->next;
		count++;
	}

	/* If the node exists, delete it */
	if (current)
	{
		if (current->next)
			current->next->prev = current->prev;
		if (current->prev)
			current->prev->next = current->next;
		free(current);
		return (1);
	}

	/* If the node doesn't exist */
	return (-1);
}
