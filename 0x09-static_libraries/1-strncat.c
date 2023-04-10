#include "main.h"

/**
 * _strncat - returns two concatenated strings
 * using at most n bytes from src
 *
 * @dest: 1st string parameter to append to
 * @src: 2nd string parameter to append
 * @n: limit parameter
 *
 * Return: dest pointer to string result
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
