#include "main.h"

/**
 * main - Entry point, multiply 2 numbers from terminal arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, r;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		r = a * b;
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
