#include "lists.h"

/**
 * sum_listint - calculate the sum of all data in a linked list
 *
 * @head: 1st node of linked list
 *
 * Return: sum total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}

	return (total);
}
