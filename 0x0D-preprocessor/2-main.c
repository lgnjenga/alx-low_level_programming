#include <stdio.h>

/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* print the name of the file it was compiled from */
	printf("%s\n", __FILE__);
	return (0);
}
