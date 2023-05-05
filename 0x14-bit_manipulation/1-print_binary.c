#include "main.h"

/**
 * print_binary - Display binary representation of a decimal number
 *
 * @n: Decimal number to be converted to binary and printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int pos;
	int has_significant_bit = 0;
	unsigned long int current;

	for (pos = 63; pos >= 0; pos--)
	{
		current = n >> pos;

		if (current & 1)
		{
			_putchar('1');
			has_significant_bit = 1;
		}
		else if (has_significant_bit)
		{
			_putchar('0');
		}
	}

	if (!has_significant_bit)
		_putchar('0');
}
