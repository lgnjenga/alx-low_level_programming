#include "main.h"

/**
 * set_string - set value of pointer to char
 *
 * @s: pointer to pointer parameter
 * @to: pointer to char
 *
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
