#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a specified index
 *
 * @n: Pointer to the decimal number to modify
 * @index: Index of the bit to be set to 0, starting from 0
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Verify if the index is within the valid range (0-63) */
	/* for unsigned long int */
	if (index > 63)
		return (-1);

	/* Create a mask by shifting 1UL to the left by 'index' positions */
	/* then invert the mask using bitwise NOT. */
	/* Perform bitwise AND with *n to set the bit at the specified index */
	/* to 0 while preserving the other bits */
	*n = (~(1UL << index) & *n);

	/* Return 1 to indicate a successful operation */
	return (1);
}
