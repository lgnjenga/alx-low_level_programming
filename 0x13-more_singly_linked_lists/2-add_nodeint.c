#include "lists.h"
/**
 * add_nodeint - function to add new node
 *
 * @head: pointer to pointer to a listint_t node
 * @n: value of the new node added to the start of the list
 *
 * Return: pointer to a listint_t node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Allocate memory for new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* check if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

	/* assign data to new node */
	new_node->n = n;

	/* make next of new node as head */
	new_node->next = (*head);

	/* move head to point to new node */
	(*head) = new_node;

	return (new_node);
}
