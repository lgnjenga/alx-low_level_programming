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

	/* For loop  */
	for (letter = 'a'; letter <= 'z'; letter++)
		/* if statement and logicalAND operator  */
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}

	putchar('\n');

	return (0);
}
