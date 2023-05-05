#include "main.h"

/**
 * get_bit - Retrieve the value of a bit at specific index in a decimal number
 *
 * @n: Decimal number to examine
 * @index: Index of the bit to retrieve
 *
 * Return: Value of the bit at the specified index, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	/* Check if index is within the valid range (0-63) for unsigned long int */
	if (index > 63)
		return (-1);

	/* Shift the bits of 'n' to the right by 'index' positions and */
	/* use bitwise AND with 1 to isolate the value of the bit */
	/* at the specified index */
	bit_value = (n >> index) & 1;

	/* Return the value of the bit at the specified index */
	return (bit_value);
}
