#include "main.h"

/**
 * open_file - Open a file
 *
 * @filename: Name of the file to open
 * @flags: Flags to use when opening the file
 * @mode: Mode to use when opening the file
 * @exit_code: Exit code to use if file can't be opened
 *
 * Return: File descriptor of opened file
 */
int open_file(char *filename, int flags, mode_t mode, int exit_code)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't %s %s\n",
				(flags & O_RDONLY) ? "read from" : "write to", filename);
		exit(exit_code);
	}
	return (fd);
}
