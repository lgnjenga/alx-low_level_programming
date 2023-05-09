#include "main.h"

/**
 * main - Entry point, copies the content of one file to another.
 *
 * @argc: The number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success, non-zero error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dest;
	char buf[1024];
	ssize_t read_count, write_count;

	if (argc != 3)
		handle_error(97, NULL, -1);

	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
		handle_error(98, argv[1], fd_src);

	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
		handle_error(99, argv[2], fd_dest);

	while ((read_count = read(fd_src, buf, 1024)) > 0)
	{
		write_count = write(fd_dest, buf, read_count);
		if (write_count != read_count)
			handle_error(99, argv[2], fd_dest);
	}

	if (read_count == -1)
		handle_error(98, argv[1], fd_src);

	if (close(fd_src) == -1)
		handle_error(100, NULL, fd_src);

	if (close(fd_dest) == -1)
		handle_error(100, NULL, fd_dest);

	return (0);
}
