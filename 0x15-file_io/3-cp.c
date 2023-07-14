#include "main.h"

/**
 * main - Entry point
 * @argc: Count of arguments
 * @argv: Array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		_putchar("Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open_file(argv[1], O_RDONLY, 0, 98);
	file_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664, 99);

	read_write_file(file_from, file_to);

	close_file(file_from, 100);
	close_file(file_to, 100);

	return (0);
}
