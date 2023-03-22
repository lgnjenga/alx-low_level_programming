#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @p: parameter of type int
 *
 * Return: Always q
 */
int print_last_digit(int p)
{
	int q;

	q = p % 10;
	if (p < 0)
		q = -p;
	return (q);
}
