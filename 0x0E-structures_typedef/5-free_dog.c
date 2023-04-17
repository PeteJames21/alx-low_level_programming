#include "dog.h"
#include <stdlib.h>

/**
* free_dog - free memory allocated to the dog
* @d: pointer to the dog
*/
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
