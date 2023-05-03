#include "lists.h"

/**
 * free_listint_safe - frees memory space allocated by list
 *
 * @h: pointer to 1st node
 *
 * Return: size of list that was freed up
 */
size_t free_listint_safe(listint_t **h)
{
	if (h == NULL || *h == NULL)
		return (0);

	listint_t *slow = *h, *fast = *h, *prev = NULL;
	size_t count = 0;

	while (fast != NULL && fast->next != NULL)
	{
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			prev->next = NULL;
			break;
		}
	}

	listint_t *next;

	while (*h != NULL)
	{
		next = (*h)->next;
		free(*h);
		*h = next;
		count++;
	}

	*h = NULL;

	return (count);
}
