#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 *                 to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed,
 * or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_fd; /* File descriptor for the input file */
	ssize_t bytes_read, bytes_written; /* Number of bytes read and written */
	char *read_buffer; /* Buffer to store the read data */

	if (filename == NULL)
		return (0);

	file_fd = open(filename, O_RDONLY);
	if (file_fd == -1)
		return (0);

	read_buffer = malloc(sizeof(char) * letters);
	if (read_buffer == NULL)
	{
		close(file_fd);
		return (0);
	}

	bytes_read = read(file_fd, read_buffer, letters);
	if (bytes_read == -1)
	{
		close(file_fd);
		free(read_buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, read_buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file_fd);
		free(read_buffer);
		return (0);
	}

	close(file_fd);
	free(read_buffer);

	return (bytes_written);
}
