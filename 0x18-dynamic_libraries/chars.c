#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	return (_islower(c) || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - Returns the absolute value of an integer.
 * @n: The integer to get the absolute value of.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
