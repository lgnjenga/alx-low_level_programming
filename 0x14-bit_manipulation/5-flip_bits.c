#include "main.h"

/**
 * flip_bits - Computes number of bits to change/convert
 * from one number to another
 *
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits required to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int changed_bits = 0;

	/* Traverse through each bit in the XOR value */
	/* If the bit is set (1), it signifies that the bit needs to be changed */
	while (xor_value)
	{
		/* Increase the changed_bits if the least significant bit is set (1) */
		changed_bits += xor_value & 1;

		/* Move the bits of xor_value to the right by one position */
		xor_value >>= 1;
	}

	/* Return the total count of bits required to change */
	return (changed_bits);
}
