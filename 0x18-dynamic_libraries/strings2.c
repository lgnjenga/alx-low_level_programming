#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest)
		dest++;
	while (n-- && *src)
		*dest++ = *src++;
	*dest = '\0';

	return (original_dest);
}

/**
 * _strncpy - Copies a string, including the terminating null byte.
 * @dest: The buffer to copy to.
 * @src: The string to copy.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (n && *src)
	{
		*dest++ = *src++;
		n--;
	}
	while (n)
	{
		*dest++ = '\0';
		n--;
	}

	return (original_dest);
}

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: The difference of the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with
 * the constant byte b.
 * @s: The memory area to fill.
 * @b: The byte to fill with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *original_s = s;

	while (n--)
		*s++ = b;

	return (original_s);
}

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n--)
		*dest++ = *src++;

	return (original_dest);
}
