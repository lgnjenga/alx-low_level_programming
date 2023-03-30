#include "main.h"

/**
 * reverse_array - reverse array of integers
 *
 * @a: array parameter to be reversed
 * @n: size of array
 *
 * Return: 0;
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
