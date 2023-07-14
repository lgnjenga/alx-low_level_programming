#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 *
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_res;
	ssize_t text_len = 0;

	/* If filename is NULL return -1 */
	if (filename == NULL)
		return (-1);

	/* Open the file in append mode, return -1 if it doesn't exist */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	/* If text_content is NULL, do not add anything to the file */
	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;

		/* Write the text_content to the file */
		write_res = write(file_descriptor, text_content, text_len);

		/* If writing fails, return -1 */
		if (write_res == -1)
			return (-1);
	}

	/* Close the file */
	close(file_descriptor);

	/* Return 1 if everything is successful */
	return (1);
}
