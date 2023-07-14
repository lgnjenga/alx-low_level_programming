#include "main.h"

/**
 * handle_errors - handles various error scenarios
 * @fd: file descriptor
 * @file_name: name of the file
 * @err_code: error code to exit with
 *
 * Return: nothing
 */
void handle_errors(int fd, char *file_name, int err_code)
{
	if (err_code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
	else if (err_code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	else if (err_code == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

	exit(err_code);
}
