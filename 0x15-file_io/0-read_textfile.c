#include "main.h"

/**
 * cleanup - frees allocated resources and closes the file
 * @buffer: pointer to the buffer
 * @fd: file descriptor
 */
void cleanup(char *buffer, int fd)
{
	free(buffer);
	close(fd);
}

/**
 * read_file - reads the file
 * @fd: file descriptor
 * @buffer: buffer to store the content
 * @letters: number of letters to read
 *
 * Return: number of bytes read
 */
ssize_t read_file(int fd, char *buffer, size_t letters)
{
	return (read(fd, buffer, letters));
}

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read and print
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read_file(fd, buffer, letters);
	if (bytesRead == -1)
	{
		cleanup(buffer, fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten != bytesRead)
	{
		cleanup(buffer, fd);
		return (0);
	}

	cleanup(buffer, fd);
	return (bytesRead);
}
