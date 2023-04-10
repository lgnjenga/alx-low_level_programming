#include "main.h"

/**
 * _puts - prints string followed by a new line
 *
 * @str: parameter to be printed
 *
 * Return: 0.
 */
void _puts(char *str)
{
	int l;

	l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
