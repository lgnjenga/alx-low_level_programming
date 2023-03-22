#include "main.h"
/**
 * _isalpha - check alphabet using ASCII Values in conditional if statement
 *
 * @c: parameter of type int to be printed
 *
 * Return: 1 if alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
