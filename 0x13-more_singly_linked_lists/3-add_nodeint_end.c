#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to 1st element on list
 * @n: data position to insert in the list
 *
 * Return: pointer to new node, NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* allocate memory for a new node */
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node;

	/* Check if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

	/* Assign data to new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If list is empty, assign the new node address to head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Else traverse till the last node */
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	/* Change the next of last node */
	last_node->next = new_node;

	return (new_node);
}

