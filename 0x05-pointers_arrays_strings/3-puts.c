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
	char s = *str;

	l = 0;

	while (s != '\0')
	{
		_putchar(s);
		l++;
		s++;
	}
	_putchar('\n');
}
