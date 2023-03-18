#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	/* Declarations  */
	int base_10_num;

	/* For loop  */
	for (base_10_num = 0; base_10_num < 10; base_10_num++)
	{
		putchar(base_10_num + '0');
	}

	putchar('\n');

	return (0);
}
