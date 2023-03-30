#include "main.h"

/**
 * _strncat - returns a concatenated strings in one with limits
 *
 * @dest: 1st string parameter to append to
 * @src: 2nd string parameter to append
 * @n: limit parameter
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_length = 0;
	int d;
	int s;
	int r;

	/* Find length of dest string array */
	for (d = 0; dest[d] != '\0'; d++)
		dest_length++;
	/* Find length of src string array */
	for (s = 0; src[s] != '\0'; s++)
		src_length++;
	/* Loop through src to append to dest */
	for (r = 0; r <= n; r++)
		dest[dest_length + r] = src[r];

	return (dest);
}
