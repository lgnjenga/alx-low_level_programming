#include "dog.h"

/**
 * free_dog - frees memory space allocted to struct dog
 *
 * @d: struct to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
