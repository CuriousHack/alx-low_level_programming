#include "dog.h"

/**
 * init_dog - function to initialize new value for struct dog
 * @d:struct pointer for dog
 * @name: name value
 * @age: age of the dog
 * @owner: owner value of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
