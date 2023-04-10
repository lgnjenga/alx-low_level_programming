#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: para1 of type char
 *
 * Return: int length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
