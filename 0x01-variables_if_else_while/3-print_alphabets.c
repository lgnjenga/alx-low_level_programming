#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	/* Declarations  */
	char letter;
	char letter2;

	/* For loop  */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
	{
		putchar(letter2);
	}
	putchar('\n');

	return (0);
}
