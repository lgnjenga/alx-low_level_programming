#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *file_name = strchr(argv[0], '/');

	/* Check if filename has / */
	if (file_name == NULL)
		file_name = argv[0];
	else
		file_name += 1;

	printf("%s\n", file_name);

	return (0);
}
