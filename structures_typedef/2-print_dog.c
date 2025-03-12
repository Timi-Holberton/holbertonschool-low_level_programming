#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Entry point
 *@d: strucure
 * Return: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	d->name = "Poppy";
	d->age = 3.5;
	d->owner = "Bob";

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}

	if (d->age == 0)
	{
		printf("nil");
	}

	if (d->owner == NULL)
	{
		printf("nil");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
