#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - s function that frees dogs
 *
 * @d: input pointer of function
 *
 * Return: a void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
