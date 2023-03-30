#include "main.h"

/**
 * _strncpy - returns a copied string
 *
 * @dest: 1st string to copy
 * @src: 2nd empty string to be copied into
 * @n: limit parameter
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
