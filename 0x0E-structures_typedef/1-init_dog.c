#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the function
 * @d: function parameter
 * @name: function parameter
 * @age: function parameter
 * @owner: function paramter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
