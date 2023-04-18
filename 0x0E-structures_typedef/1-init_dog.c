#include "dog.h"

/**
 * init_dog - initializes the variable of type struct name dog
 * @d: pointer to struct dog to initialize
 * @name: initialize name
 * @age: initialize age
 * @owner: initialize owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
