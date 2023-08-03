#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int number to be printed in binary.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Skip leading zeros */
	while ((n & mask) == 0)
	{
		mask >>= 1;
	}

	/* Print binary representation */
	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
