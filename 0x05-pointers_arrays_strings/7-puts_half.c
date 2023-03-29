#include "main.h"

/**
 * puts_half - prints second half of a string followed by a new line
 *
 * @str: parameter to be printed
 *
 * Return: 0.
 */
void puts_half(char *str)
{
	int l;
	int i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		for (i = l / 2; i <= l - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (l - 1) / 2; i <= l - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
