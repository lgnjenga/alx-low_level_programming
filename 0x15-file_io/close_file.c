#include "main.h"

/**
 * close_file - Close a file
 *
 * @fd: File descriptor of file to close
 * @exit_code: Exit code to use if file can't be closed
 *
 * Return: Nothing, void
 */
void close_file(int fd, int exit_code)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(exit_code);
	}
}
