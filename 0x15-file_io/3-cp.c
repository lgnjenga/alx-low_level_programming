#include "main.h"

/**
 * main - Entry point of program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or one of the exit codes on failure
 */
int main(int argc, char *argv[])
{
	handle_files(argc, argv);
	return (0);
}

/**
 * handle_files - Opens the source and destination files,
 * and handles the copying
 * @argc: Number of arguments
 * @argv: Array of arguments
 */
void handle_files(int argc, char *argv[])
{
	int ff, ft;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp ff ft\n");
		exit(97);
	}

	ff = open(argv[1], O_RDONLY);
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(ff);
		exit(99);
	}

	read_and_write(ff, ft, argv[1], argv[2]);

	if (close(ff) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}

	if (close(ft) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
}

/**
 * read_and_write - Reads from source file and writes to destination file
 * @ff: File descriptor of the source file
 * @ft: File descriptor of the destination file
 * @ff_name: Name of the source file
 * @ft_name: Name of the destination file
 */
void read_and_write(int ff, int ft, char *ff_name, char *ft_name)
{
	char buf[BUFSIZE];
	ssize_t read_count, write_count;

	while ((read_count = read(ff, buf, BUFSIZE)) > 0)
	{
		write_count = write(ft, buf, read_count);

		if (write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ft_name);
			close(ff);
			close(ft);
			exit(99);
		}
	}

	if (read_count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ff_name);
		exit(98);
	}
}
