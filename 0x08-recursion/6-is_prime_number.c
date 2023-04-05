#include "main.h"

int prime_helper(int n, int i);

/**
 * is_prime_number - check if number is prime with another function
 * @n: number to check
 *
 * Return: int 0 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 1));
}

/**
 * prime_helper - check number if prime
 * @n: number parameter to check
 * @i: number of times to iterate
 *
 * Return: 1 if prime, 0 if not
 */
int prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (prime_helper(n, i + 1));
}
