#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	/* Declarations  */
	int hex_num;

	/* For loop  */
	for (hex_num = 0; hex_num < 16; hex_num++)
	{
		/* if statement */
		if (hex_num < 10)
		{
			putchar(hex_num + '0');
		}
		else
		{
			putchar(hex_num - 10 + 'a');
		}
	}

	putchar('\n');

	return (0);
}
