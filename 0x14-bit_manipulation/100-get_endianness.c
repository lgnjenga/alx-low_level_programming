#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *byte = (char *)&value;

	/* If the least significant byte is stored first, */
	/* it's a little endian system */
	/* Otherwise, it's a big endian system */
	return ((int)*byte);
}
