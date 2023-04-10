#include "main.h"
/**
 * _strpbrk - returns the 1st occurence of a character
 *
 * @s: character array to be searched
 * @accept: character to check
 *
 * Return: pointer to occurence or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
