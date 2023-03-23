#include "main.h"
/**
 * print_times_table - prints the times table starting with n
 *
 *@n: parameter for starting table
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int x;
	int y;

	if (n < 15 && n > 0)
	{

		for (x = n; x <= n; x++)
		{
			for (y = n; y <= n; y++)
			{
				_putchar(x * y + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
