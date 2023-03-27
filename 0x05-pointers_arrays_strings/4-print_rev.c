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
	int k;
	int i;

	k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	for (i = k - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
