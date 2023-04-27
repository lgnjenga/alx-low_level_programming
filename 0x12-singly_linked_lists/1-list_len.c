#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 *
 * @h: pointer to list_t list
 *
 * Return: number of elements in h list
 */
size_t list_len(const list_t *h)
{
	size_t nt = 0;

	while (h)
	{
		nt++;
		h = h->next;
	}
	return (nt);
}
