#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	nn = malloc(sizeof(list_t));
	if (!nn)
	{
		return (NULL);
	}

	nn->str = strdup(str);
	nn->len = len;
	nn->next = (*head);
	(*head) = nn;

	return (*head);
}
