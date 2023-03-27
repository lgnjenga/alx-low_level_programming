#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: parameter to be reversed
 *
 * Return: 0.
 */
void rev_string(char *s)
{
	int j;
	int i;
	char c;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = c;
	}
	_putchar('\n');
}
