#include "main.h"
/**
 * print_sign - check alphabet using ASCII Values in conditional if statement
 *
 * @n: parameter of type int to be printed
 *
 * Return: 1 if n is greater than zero
 * and 0 if n is zero
 * and -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
