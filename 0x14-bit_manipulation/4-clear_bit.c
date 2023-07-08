#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: Pointer to the number in which the bit is cleared.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* create a mask with the bit at the given index cleared */
	mask = ~(1UL << index);

	/*  use bitwise AND(&) to clear the bit at the given index */
	*n &= mask;

	return (1);
}
