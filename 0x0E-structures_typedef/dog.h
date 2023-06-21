#ifndef DOGGY
#define DOGGY

/**
 * struct dog - struct for dog prof
 * @name: name of dog
 * @age: how old are you
 * @owner: na who get you
 *
 * Description: Struct for some damn dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
