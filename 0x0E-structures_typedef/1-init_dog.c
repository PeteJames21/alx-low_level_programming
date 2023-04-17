#include "dog.h"

/**
* init_dog - initialize the members of a struct dog
* @d: pointer to a struct dog
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
