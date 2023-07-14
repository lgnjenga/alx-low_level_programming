#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, or exit with error code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	/* Check number of arguments */
	check_args(argc);

	/* Open source file for reading */
	file_from = open_file_read(argv[1]);

	/* Open destination file for writing */
	file_to = open_file_write(argv[2]);

	/* Read from source file and write to destination file */
	while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
			handle_errors(file_to, argv[2], 99);
	}

	/* Check if reading or writing failed */
	if (read_bytes == -1)
		handle_errors(file_from, argv[1], 98);

	/* Close files and check for errors */
	if (close(file_from) == -1)
		handle_errors(file_from, argv[1], 100);
	if (close(file_to) == -1)
		handle_errors(file_to, argv[2], 100);

	return (0);
}
