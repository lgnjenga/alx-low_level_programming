#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: Always 0
 */
void times_table(void)
{
	int x;
	int y;
	int p;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			p = x * y;
			_putchar(p + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
