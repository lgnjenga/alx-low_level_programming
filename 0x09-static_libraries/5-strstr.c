#include "main.h"

/**
 * _strstr - finds the 1st occurence of the substring
 *
 * @haystack: string to be searched
 * @needle: string to use to search
 *
 * Return: pointer to 1st occurence or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		return NULL;
	}
}
