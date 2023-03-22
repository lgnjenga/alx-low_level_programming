#include "main.h"
/**
 * print_alphabet - prints alphabet a to z 10 times using nested for loops
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
