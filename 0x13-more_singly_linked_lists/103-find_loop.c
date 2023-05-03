#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the head of linked list
 *
 * Return: The address of the node where the loop starts, NULL otherwise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f;

	if (!head)
		return (NULL);

	s = head;
	f = head;

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;

		if (s == f)  /* loop detected */
		{
			s = head;

			while (s != f)
			{
				s = s->next;
				f = f->next;
			}

			return (s);  /* the start of loop */
		}
	}

	return (NULL);  /* no loop detected */
}
