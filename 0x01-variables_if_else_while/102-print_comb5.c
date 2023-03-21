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
	int i;
	int j;
	int k;
	int l;

	/* For loop  */
	for (a = 0; a < 100; a++)
	{
		/* Inner For Loop  */
		for (b = a; b < 100; b++)
		{
			i = a / 10;
			j = a % 10;
			k = b / 10;
			l = b % 10;
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');
			putchar('0' + k);
			putchar('0' + l);
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
