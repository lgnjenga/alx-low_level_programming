#include "main.h"

/**
 * _strlen_recursion - calculates length of string
 * @s: string parameter to be calculated
 *
 * Return: int length or 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (_strlen_recursion(s) + 1);
}
