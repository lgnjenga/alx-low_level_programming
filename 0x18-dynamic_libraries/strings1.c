#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}

/**
 * _puts - Outputs a string followed by a newline.
 * @s: The string to output.
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}

/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed to by dest.
 * @dest: The buffer to copy to.
 * @src: The string to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (original_dest);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int number = 0;
	int in_num = 0;

	while (*s)
	{
		if (*s == '-' && !in_num)
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
		{
			in_num = 1;
			number = number * 10 + (*s - '0');
		}
		else if (in_num)
			break;
		s++;
	}

	return (sign * number);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (original_dest);
}
