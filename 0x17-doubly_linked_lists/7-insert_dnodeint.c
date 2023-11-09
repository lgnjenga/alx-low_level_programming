#include "lists.h"

/**
 * create_new_node - creates a new node with a given value.
 * @n: The data for the new node.
 * Return: Pointer to the new node, or NULL if it failed.
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	return (new);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: The data for the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new = create_new_node(n);
	if (!new)
		return (NULL);

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	new->prev = temp;
	if (temp->next)
		temp->next->prev = new;
	temp->next = new;

	return (new);
}
