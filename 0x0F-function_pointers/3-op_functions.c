#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add 2 numbers
 *
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: int sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 numbers
 *
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: int result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 *
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: int result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 numbers
 *
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: int result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulous of 2 numbers
 *
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: int result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
