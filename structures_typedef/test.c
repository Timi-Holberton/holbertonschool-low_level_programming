#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Crée une nouvelle structure dog_t et alloue la mémoire
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Return: Un pointeur vers la nouvelle structure dog_t, ou NULL en cas d'échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int long1, long2;
	dog_t *d;

	/* Vérification des paramètres */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocation de la structure principale */
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	/* Calcul des longueurs de name et owner */
	for (long1 = 0; name[long1] != '\0'; long1++)
		;
	for (long2 = 0; owner[long2] != '\0'; long2++)
		;

	/* Allocation de la mémoire pour name */
	d->name = malloc((long1 + 1) * sizeof(char));
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	/* Allocation de la mémoire pour owner */
	d->owner = malloc((long2 + 1) * sizeof(char));
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	/* Copie des valeurs */
	for (long1 = 0; name[long1] != '\0'; long1++)
		d->name[long1] = name[long1];
	d->name[long1] = '\0';

	for (long2 = 0; owner[long2] != '\0'; long2++)
		d->owner[long2] = owner[long2];
	d->owner[long2] = '\0';

	d->age = age;

	return (d);
}
