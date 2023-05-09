#include "main.h"
#include <stdlib.h>

/**
 * print_textfile - Reads a text file and outputs its contents to STDOUT
 *
 * @filename: Name of the text file to read
 * @letters: Number of characters to read from the file
 *
 * Return: written_count - actual number of bytes read and printed
 *		 0 if the function fails or the filename is NULL
 */
ssize_t print_textfile(const char *filename, size_t letters)
{
	char single_char;
	ssize_t file_desc;
	ssize_t read_count;
	ssize_t written_count = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open the file */
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	/* Read and print characters one by one */
	for (read_count = 0; read_count < letters; ++read_count)
	{
		/* Read a single character from the file */
		if (read(file_desc, &single_char, 1) != 1)
			break;

		/* Write the character to STDOUT */
		if (write(STDOUT_FILENO, &single_char, 1) != 1)
			return (0);

		/* Increment the written_count */
		++written_count;
	}

	/* Close the file */
	close(file_desc);

	return (written_count);
}
