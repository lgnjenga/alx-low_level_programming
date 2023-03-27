#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: para1
 * @b: para2
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int pa;
	int pb;

	pa = *a;
	pb = *b;

	*a = pb;
	*b = pa;
}
