#include "main.h"
/**
 * _strchr - returns the 1st occurence of a character
 *
 * @s: character array to be searched
 * @c: character to check
 *
 * Return: pointer to occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
}
