#include "main.h"

/**
 * open_file_read - opens a file for reading
 * @file_name: name of the file to be opened
 *
 * Return: file descriptor of the opened file, or exit with code 98 on failure
 */
int open_file_read(char *file_name)
{
	int fd = open(file_name, O_RDONLY);

	if (fd == -1)
		handle_errors(fd, file_name, 98);

	return (fd);
}

/**
 * open_file_write - opens a file for writing
 * @file_name: name of the file to be opened
 *
 * Return: file descriptor of the opened file, or exit with code 99 on failure
 */
int open_file_write(char *file_name)
{
	int fd = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
		handle_errors(fd, file_name, 99);

	return (fd);
}
