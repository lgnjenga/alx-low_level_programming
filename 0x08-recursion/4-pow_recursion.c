#include "main.h"

/**
 * _pow_recursion - calculate exponent using recursion
 * @x: base number
 * @y: exponent/power number
 *
 * Return: r int exponent result, otherwise -1 or 1
 */
int _pow_recursion(int x, int y)
{
	int r = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	r = x * _pow_recursion(x, y - 1);
	return (r);
}
