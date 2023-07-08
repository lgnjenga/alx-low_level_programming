#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip
 * to get from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* perform bitwise XOR to get the differing bits */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		/* check if the righmost bit is 1 */
		if ((xor_result & 1) == 1)
			count++;

		/* shift the result to the right by one bit */
		xor_result >>= 1;
	}

	return (count);
}
