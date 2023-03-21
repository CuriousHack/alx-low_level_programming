#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function to print dog details
 * @d: structure of dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}

}
