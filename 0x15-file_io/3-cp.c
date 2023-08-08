#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: 0 on success, or exit with one of the error codes
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t read_res;

	check_argc(argc);
	fd_from = open_file(argv[1]);
	fd_to = create_or_truncate_file(argv[2]);

	while ((read_res = read(fd_from, buffer, 1024)) > 0)
		write_to_file(fd_to, buffer, read_res, argv[2]);

	if (read_res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_files(fd_from, fd_to);

	return (0);
}
