#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	/* Declarations  */
	int a;
	int b;

	/* For loop  */
	for (a = 0; a < 100; a++)
	{
		/* Inner For Loop  */
		for (b = a; b < 100; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a != 99 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
