#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 *
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Actual number of letters it could read and print, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_res, write_res;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	read_res = read(fd, buffer, letters);
	if (read_res == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write_res = write(STDOUT_FILENO, buffer, read_res);
	free(buffer);

	close(fd);
	return ((write_res == read_res ? write_res : 0));
}
