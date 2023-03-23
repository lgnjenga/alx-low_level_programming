#include "main.h"

/**
 * print_line - print line n times using underscore
 *
 * @n: parameter to be used for iteration
 *
 * Return: 0 Always
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
