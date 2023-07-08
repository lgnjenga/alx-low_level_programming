#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number in which the bit is set.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* use bitwise OR (|) to set the bit at the given index */
	*n |= (1UL << index);

	return (1);
}
