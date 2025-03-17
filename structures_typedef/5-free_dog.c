#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the dogsss.
 * @d: pointer.
 * Return: VOID
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);

	free(d);
}
