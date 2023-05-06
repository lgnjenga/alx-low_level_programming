#include "main.h"

/**
 * get_endianness - Determines the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int test_num = 1;

	/* Cast the address of test_num to a char pointer and then dereference it */
	/* If the system is little endian, */
	/* the least significant byte will be stored first, */
	/* so the value will be 1; otherwise, it will be 0 for big endian systems */
	return ((*(char *)&test_num) == 1 ? 1 : 0);
}
