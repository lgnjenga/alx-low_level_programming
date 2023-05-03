#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 *
 * @head: pointer to 1st head in linked list
 *
 * Return: pointer to head in new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		/* store the next node */
		next = (*head)->next;
		/* Reverse the link */
		(*head)->next = prev;
		/* Move prev one step forward */
		prev = *head;
		/* Move head one step forward */
		*head = next;
	}

	/* Reset head to the new 1st node */
	*head = prev;
	return (*head);
}
