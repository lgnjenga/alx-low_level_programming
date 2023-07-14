#include "main.h"

/**
 * read_write_file - Read from one file and write to another
 *
 *@file_from: File descriptor of file to read from
 * @file_to: File descriptor of file to write to
 *
 * Return: Nothing, void
 */
void read_write_file(int file_from, int file_to)
{
	ssize_t read_val, write_val;
	char buffer[BUF_SIZE];

	while ((read_val = read(file_from, buffer, BUF_SIZE)) > 0)
	{
		write_val = write(file_to, buffer, read_val);
		if (write_val != read_val)
		{
			dprintf(2, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (read_val == -1)
	{
		dprintf(2, "Error: Can't read from file\n");
		exit(98);
	}
}
