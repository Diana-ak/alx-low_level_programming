#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: the structure to free
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
