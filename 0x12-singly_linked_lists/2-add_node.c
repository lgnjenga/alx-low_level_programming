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
	list_t *new;
	unsigned int ln = 0;

	while (str[ln])
	{
		ln++;
	}

	nn = malloc(sizeof(list_t));
	if (!nn)
	{
		return (NULL);
	}

	nn->str = strdup(str);
	nn->ln = ln;
	nn->next = (*head);
	(*head) = nn;

	return (*head);
}
