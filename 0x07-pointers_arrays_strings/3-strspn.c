#include "main.h"

/**
 * _strspn - compares two strings and returns number similar occurences
 *
 * @s: original string to compare too
 * @accept: string to compare with
 *
 * Return: int number of occurences
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				r++;
			}
			else if (accept[j + 1] == '\0')
			{
				break;
				return (r);
			}
		}
	}
	return (r);
}
