#include "main.h"

/**
 * print_rev - prints string in reverse followed by a new line
 *
 * @str: parameter to be printed
 *
 * Return: 0.
 */
void print_rev(char *str)
{
	int l;
	int i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
