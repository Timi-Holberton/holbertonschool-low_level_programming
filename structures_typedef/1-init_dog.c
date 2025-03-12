#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Entry point
 *@d : structure
 *@name : nom
 *@age : age
 *@owner : propriétaire
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
