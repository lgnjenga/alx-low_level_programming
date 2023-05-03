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
	listint_t *slow;
	listint_t *fast;
	listint_t *prev = NULL;
	listint_t *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

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
