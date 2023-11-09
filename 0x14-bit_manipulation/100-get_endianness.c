#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned char c[sizeof(unsigned int)];
	unsigned int x = 1;

	*(unsigned int *)c = x;
	return (c[0]);
}
