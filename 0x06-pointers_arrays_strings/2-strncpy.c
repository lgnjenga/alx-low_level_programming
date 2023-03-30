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
	int r;

	/* Loop through src n times to copy to dest */
	for (r = 0; r < n; r++)
		dest[r] = src[r];

	return (dest);
}
