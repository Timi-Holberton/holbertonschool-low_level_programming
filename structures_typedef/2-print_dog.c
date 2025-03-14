#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Affiche les informations d'une structure `dog`
 * @d: Pointeur vers la structure `dog` à afficher
 * Cette fonction affiche le nom, l'âge et le propriétaire du
 * chien stockés dans la structure `dog`. Si `d` est NULL,
 * la fonction ne fait rien. Si un élément de la structure
 * est NULL, elle affiche "(nil)" à la place.
 * Return: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
