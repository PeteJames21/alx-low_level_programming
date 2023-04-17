#include "dog.h"
#include <stdlib.h>

/**
* new_dog - create a new `struct dog`
* @name: the dog's name
* @age: the dog's age
* @owner: the dog's owner
*
* Return: a pointer to the newly created dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_cpy, *owner_cpy;

	dog_t *doggy = malloc(sizeof(dog_t));

	if (!doggy)
		return (NULL);

	if (name == NULL || owner == NULL)
		return (NULL);

	/* Copy name and owner to new variables (instruction requirement) */
	name_cpy = _strdup(name);
	owner_cpy = _strdup(owner);
	if (!name_cpy || !owner_cpy)
	{
		free(doggy);
		free(name_cpy);
		free(owner_cpy);

		return (NULL);
	}

	doggy->name = name_cpy;
	doggy->age = age;
	doggy->owner = owner_cpy;

	return (doggy);
}

/**
* _strdup - copy the provided string to a new memory location
* @str: pointer to the string to be copied
*
* Return: a pointer to the memory holding the copy of the string
*/
char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	/* Determine the size of the string excluding the null byte */
	while (*(str + size))
		size += 1;

	p = malloc(size + 1);  /* +1 to accomodate null byte */

	if (p == NULL)
		return (NULL);

	/* Copy str to new memory location */
	for (i = 0; *(str + i); i++)
		*(p + i) = *(str + i);

	p[i] = '\0';

	return (p);
}
