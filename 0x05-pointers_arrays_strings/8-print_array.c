#include <stdio.h>

/**
 * print_array - print n elements of array a
 *
 * @a: para1 array
 * @n: para2 n elents of array
 *
 * Return: 0.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

