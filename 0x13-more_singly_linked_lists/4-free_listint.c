#include "lists.h"

/**
 * free_listint - free space allocated by a linked list
 *
 * @head: listint_t to be freed
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
