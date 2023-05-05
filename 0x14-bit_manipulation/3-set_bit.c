#include "main.h"

/**
 * set_bit - Changes the value of a bit to 1 at a specified index
 * @n: Pointer to the decimal number to modify
 * @index: Index of the bit to be set to 1, starting from 0
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Verify if the index is within the valid range (0-63) */
	/* for unsigned long int */
	if (index > 63)
		return (-1);

	/* Shift 1UL to the left by 'index' positions, */
	/* then perform bitwise OR with *n */
	/* to set the bit at the specified index to 1 */
	/* without altering the other bits */
	*n = ((1UL << index) | *n);

	/* Return 1 to indicate a successful operation */
	return (1);
}
