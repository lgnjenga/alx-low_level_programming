#include "dog.h"

/**
 * print_dog - print dog details from struct
 *
 * @d: dog d struct to print
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (dog == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
