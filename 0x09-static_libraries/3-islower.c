#include "main.h"
/**
 * _islower - check lowercase using ASCII Values in conditional if statement
 *
 * @c: parameter of type int to be printed
 *
 * Return: 1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
