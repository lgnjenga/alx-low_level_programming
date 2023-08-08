#include "main.h"

/**
 * check_argc - checks if argument count is correct
 * @argc: Number of arguments
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_file - opens a file
 * @filename: Name of the file to open
 *
 * Return: file descriptor on success, -1 on failure
 */
int open_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * create_or_truncate_file - creates or truncates a file
 * @filename: Name of the file
 *
 * Return: file descriptor on success, -1 on failure
 */
int create_or_truncate_file(const char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT |
			O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (fd);
}

/**
 * write_to_file - writes to a file
 * @fd: File descriptor
 * @buffer: Buffer containing data to be written
 * @bytes: Number of bytes to write
 * @filename: Name of the file
 */
void write_to_file(int fd, char *buffer, ssize_t bytes, const char *filename)
{
	if (write(fd, buffer, bytes) != bytes)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * close_files - closes file descriptors
 * @fd1: First file descriptor
 * @fd2: Second file descriptor
 */
void close_files(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
