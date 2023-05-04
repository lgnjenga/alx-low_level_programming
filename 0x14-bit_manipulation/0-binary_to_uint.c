#include "main.h"

/**
 * binary_to_uint - convert binary string to unsigned int
 *
 * @b: binary string to convert
 *
 * Return: result unsigned int, 0 Otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t x;
	size_t len;
	char c;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (x = 0; x < len; x++)
	{
		c = b[x];

		if (c != '0' && c != '1')
			return (0);

		result = result << 1;
		if (c == '1')
			result += 1;
	}

	return (result);
}
