#include "main.h"

/**
 * allocate_buffer - Allocates memory for a buffer of size 1024 bytes.
 * @filename: The name of the file for which buffer is being allocated.
 *
 * Return: A pointer to the allocated buffer.
 */
char *allocate_buffer(char *filename)
{
	char *buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buf);
}

/**
 * close_fd - Closes a file descriptor.
 * @file_descriptor: The file descriptor to be closed.
 */
void close_fd(int file_descriptor)
{
	if (close(file_descriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * read_and_write - Reads from source and writes to destination file.
 * @s_fd: The file descriptor of the source file.
 * @d_fd: The file descriptor of the destination file.
 * @buffer: The buffer used for reading and writing.
 * @fn_f: The name of the source file.
 * @fn_t: The name of the destination file.
 */
void read_and_write(int s_fd, int d_fd, char *buffer, char *fn_f, char *fn_t)
{
	int read_status, write_status;

	do {
		read_status = read(s_fd, buffer, 1024);

		if (read_status == -1)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn_f);
			exit(98);
		}

		write_status = write(d_fd, buffer, read_status);

		if (write_status == -1)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fn_t);
			exit(99);
		}

	} while (read_status > 0);

	free(buffer);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If source file does not exist or cannot be read - exit code 98.
 * If destination file cannot be created or written to - exit code 99.
 * If source or destination file cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int s_fd, d_fd;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file dest_file\n");
		exit(97);
	}

	buf = allocate_buffer(argv[2]);
	s_fd = open(argv[1], O_RDONLY);
	d_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (s_fd == -1 || d_fd == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	read_and_write(s_fd, d_fd, buf, argv[1], argv[2]);

	close_fd(s_fd);
	close_fd(d_fd);

	return (0);
}
