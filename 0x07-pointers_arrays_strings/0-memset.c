#include "main.h"

/**
 * char *_memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: pointer to character array
 * @b: character array to fill with
 * @n: number of bytes to fill
 *
 * Return: s pointer to final character array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;

	do {
		s[a] = b;
		a++;
	} while (a < n);

	return (s);
}
