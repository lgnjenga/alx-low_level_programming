#include "main.h"

/**
 * create_file - creates a file with the given name
 * and writes text_content to it
 *
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can't be created or written, etc.)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_result;
	size_t content_len = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file with the specified permissions and flags */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write its content to the file */
	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		while (text_content[content_len])
			content_len++;

		/* Write the content to the file */
		write_result = write(fd, text_content, content_len);
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor */
	close(fd);
	return (1);
}
