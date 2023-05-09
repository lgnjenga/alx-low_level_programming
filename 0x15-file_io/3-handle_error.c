#include "main.h"

/**
 * handle_error - Handles various error cases
 * and exits the program with the given error code.
 *
 * @error_code: The error code to exit with
 * @filename: The name of the file related to the error, if applicable
 * @fd: The file descriptor related to the error, if applicable
 *
 * Return: Nothing (void)
 */
void handle_error(int error_code, const char *filename, int fd)
{
	switch (error_code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
	}

	if (fd >= 0)
		close(fd);

	exit(error_code);
}
