#include "lists.h"

/**
 * print_listint_safe - print list and return number of nodes
 *
 * @head: 1st node in list
 *
 * Return: number of node_count
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	const listint_t *loop = NULL;
	size_t node_count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop = slow;
			break;
		}
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;

		if (head == loop && loop != NULL)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}

		head = head->next;
	}

	return (node_count);
}
