#include "main.h"

/**
 * binary_to_uint - convert binary to int
 *
 * @b: binary number in string
 *
 * Return: converted result number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Shift left by one bit */
		result <<= 1;
		/* Add the bit value */
		result += b[i] - '0';
	}

	return (result);
}

