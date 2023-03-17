#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Datatypes declarations */
	char c;
	int i;
	long int li;
	long long int llint1;
	float f;

	/* print size of data types */
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(llint1));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}
