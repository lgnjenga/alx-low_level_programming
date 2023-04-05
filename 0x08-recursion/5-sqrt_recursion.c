#include "main.h"

int sqrt_fn(int b, int e);

/**
 * _sqrt_recursion - return square root natural number
 * @n: number to check
 *
 * Return: square root natural number
 */
int _sqrt_recursion(int n)
{
	return (sqrt_fn(n, 1));
}

/**
 * sqrt_fn - calculate the natural square root
 * @b: base number
 * @e: exponent
 *
 * Return: square root natural number
 */
int sqrt_fn(int b, int e)
{
	int r = e * e;

	if (r > b)
		return (-1);
	if (r == b)
		return (e);
	return (sqrt_fn(b, e + 1));
}
