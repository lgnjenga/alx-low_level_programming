#include "main.h"
/**
 * _memcpy - copies bytes from one memory area to another
 *
 * @dest: final memory area
 * @src: original/source memory area
 * @n: bytes to be copied
 *
 * Return: pointer to dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
