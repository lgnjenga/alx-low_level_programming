#include "main.h"

/**
 * more_numbers - prints numbers (0 - 14) 10 times using nested for loops
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
