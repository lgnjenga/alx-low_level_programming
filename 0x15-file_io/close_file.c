#include "main.h"

/**
 * close_file - Close a file
 * @fd: File descriptor of file to close
 * @exit_code: Exit code to use if file can't be closed
 */
void close_file(int fd, int exit_code)
{
	if (close(fd) == -1)
	{
		_putchar("Error: Can't close fd ");
		_putchar('0' + fd);
		_putchar('\n');
		exit(exit_code);
	}
}
