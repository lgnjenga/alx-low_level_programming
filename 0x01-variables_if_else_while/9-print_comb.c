#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	/* Declarations  */
	int combination_num;

	/* For loop  */
	for (combination_num = 0; combination_num < 10; combination_num++)
	{
		putchar(combination_num + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
