#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 *
 * @head: pointer to first node
 * @index: index of node to delete
 *
 * Return: 1 (Success), 0 Otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *next;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index - 1)
		{
			next = current->next;
			if (next == NULL)
			{
				return (-1);
			}

			current->next = next->next;
			free(next);
			return (1);
		}
		i++;
		current = current->next;
	}

	return (-1);
}
