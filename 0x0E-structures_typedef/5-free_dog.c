#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d: pointer to dog struct
 * Return: Always (0) Sucess
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
