#include "main.h"

/**
 * malloc_checked - allocate memery using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: pointer to memory or 98 Error code
 */
void *malloc_checked(unsigned int b)
{
	void *pb;

	pb = malloc(b);

	if (pb == NULL)
		exit(98);

	return (pb);
}
