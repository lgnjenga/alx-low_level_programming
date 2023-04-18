#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - dog information details
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner's name
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
