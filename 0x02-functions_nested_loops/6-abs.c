#include "main.h"
/**
 * _abs - check for absolute value of an int
 *
 * @x: parameter of type int
 *
 * Return: Always x
 */
int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
