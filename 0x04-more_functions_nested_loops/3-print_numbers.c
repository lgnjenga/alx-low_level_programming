#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9 using for loop
 *
 * Return:0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
