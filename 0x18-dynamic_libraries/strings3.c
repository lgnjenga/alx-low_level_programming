#include "main.h"

/**
 * _strchr - Locates the first occurrence of c in the string s.
 * @s: The string to search.
 * @c: The character to search for.
 *
 * Return: A pointer to the first occurrence of c in s,
 * or NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}

/**
 * _strspn - Computes the length of the initial segment of s
 * which consists entirely of bytes in accept.
 * @s: The string to search.
 * @accept: The bytes to search for.
 *
 * Return: The number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *original_accept = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
			accept++;
		}
		if (!*accept)
			break;
		s++;
		accept = original_accept;
	}
	return (count);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *original_accept = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
		accept = original_accept;
	}
	return (NULL);
}

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *original_needle = needle;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			char *potential_match = haystack;

			while (*needle && *haystack && *needle == *haystack)
			{
				haystack++;
				needle++;
			}
			if (!*needle)
				return (potential_match);
			needle = original_needle;
			haystack = potential_match + 1;
		}
		else
		{
			haystack++;
		}
	}
	return (NULL);
}
