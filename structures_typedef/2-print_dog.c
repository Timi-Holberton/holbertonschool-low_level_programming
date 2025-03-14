#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * print_dog - Affiche les informations d'une structure `dog`
 * @d: Pointeur vers la structure `dog` à afficher
 *
 * Cette fonction affiche le nom, l'âge et le propriétaire du
 * chien stockés dans la structure `dog`. Si `d` est NULL,
 * la fonction ne fait rien. Si un élément de la structure
 * est NULL, elle affiche "(nil)" à la place.
 */
void print_dog(struct dog *d)
{
	if (d == NULL) /* Vérifie si le pointeur est NULL */
	{
		return; /* Si oui, on quitte la fonction */
	}

	if (d->name == NULL) /* Vérifie si le nom est NULL */
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0) /* Vérifie si l'âge est 0 */
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL) /* Vérifie si le propriétaire est NULL */
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
