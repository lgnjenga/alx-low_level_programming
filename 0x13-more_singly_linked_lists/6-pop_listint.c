#include "lists.h"

/**
 * pop_listint - delete head of a node list
 *
 * @head: pointer to 1st element of linked list
 *
 * Return: deleted data, 0 otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	/* If the list is empty, return 0 */
	if (*head == NULL)
		return (0);

	/* Save the head node and its data */
	temp = *head;
	n = (*head)->n;

	/* Move the head to the next node */
	*head = (*head)->next;

	/* Delete the old head node */
	free(temp);

	return (n);
}

