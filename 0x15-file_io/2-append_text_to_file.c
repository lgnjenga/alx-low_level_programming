#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_result;
	size_t content_len = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file with the specified flags */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, append its content to the file */
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
