#include "main.h"

/**
 * check_args - checks if the correct number of arguments were passed
 * @argc: number of arguments passed to the program
 *
 * Return: nothing
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
