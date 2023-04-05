#include "main.h"

/**
 * factorial - calculate factorial of number
 * @n: input number for factorial
 *
 * Return: int factorial, -1 otherwise
 */
int factorial(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	r = n * factorial(n - 1);
	return (r);
}
