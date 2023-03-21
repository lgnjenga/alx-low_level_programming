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
	int c;

	/* For loop  */
	for (a = 0; a < 10; a++)
	{
		/* Inner For Loop  */
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c ++)
			{
				if (a != b && a != c && b!= c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
