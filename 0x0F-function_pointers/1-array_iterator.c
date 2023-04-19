#include "function_pointers.h"
/**
 * array_iterator - prints each array element on a newline
 *
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
