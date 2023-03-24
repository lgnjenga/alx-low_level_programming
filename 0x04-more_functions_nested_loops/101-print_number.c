#include "main.h"

/**
 * print_number - print intger upto 4 digits
 *
 * @n: parameter 1
 *
 * Return: Always 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
