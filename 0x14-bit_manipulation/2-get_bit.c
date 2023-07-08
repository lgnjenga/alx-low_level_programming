#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to retrieve the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* create a mask with the bit at the given index */
	unsigned long int mask = 1UL << index;

	/* check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* use bitwise AND (&) to check if bit is et */
	if ((n & mask) != 0)
		return (1);
	else
		return (0);
}
