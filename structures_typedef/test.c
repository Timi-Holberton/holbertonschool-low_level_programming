#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Entry point
 *@name : nom
 *@age : age
 *@owner : proprio
 * Return: d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int long1, long2;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	for (long1 = 0; name[long1] != '\0'; long1++)
		;
	d->name = malloc((long1 + 1) * sizeof(char));
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	for (long2 = 0; owner[long2] != '\0'; long2++)
		;
	d->owner = malloc((long2 + 1) * sizeof(char));
	if (!d->owner)
	{
		free(name);
		free(d);
		return (NULL);
	}

	d->age = age;

	for (long1 = 0; name[long1] != '\0'; long1++)
		d->name[long1] = name[long1];
	d->name[long1] = '\0';

	for (long2 = 0; owner[long2] != '\0'; long2++)
		d->owner[long2] = owner[long2];
	d->owner[long2] = '\0';

	return (d);
}
