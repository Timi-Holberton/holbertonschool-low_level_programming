#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 *@d : structure
 * Return: Always 0 (Success)
 */

void free_dog(dog_t *d)
{
	free(d->owner);

	free (d->name);

	free (d);
}
