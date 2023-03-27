#include "main.h"

/**
 * puts2 - prints every other character of a string followed by a new line
 *
 * @str: parameter to be printed
 *
 * Return: 0.
 */
void puts2(char *str)
{
	int l;
	int i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
