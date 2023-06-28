#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 * Return: Max
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog = malloc(sizeof(dog_t));
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != 0)
	{
		name_l = strlen(name) + 1;
		own_l = strlen(owner) + 1;

		if (max_dog == NULL)
			return (NULL);
	max_dog->name = malloc(sizeof(char) * name_l);

	if (max_dog->name == NULL)
	{
		free(max_dog);
		return (NULL);
	}

	max_dog->owner = malloc(sizeof(char) * own_l);

	if (max_dog->owner == NULL)
	{
		free(max_dog->name);
		free(max_dog);
		return (NULL);
	}


	max_dog->name = strcpy(max_dog->name, name);
	max_dog->owner = strcpy(max_dog->owner, owner);
	max_dog->age = age;
	}

	return (max_dog);
}

