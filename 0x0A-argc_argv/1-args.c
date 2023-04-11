#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{

	/* ignore the argv argument to evade Werror unused parameter error */
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
