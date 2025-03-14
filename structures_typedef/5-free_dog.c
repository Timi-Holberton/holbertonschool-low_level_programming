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
	if (!d)
		return;

	free(d->owner);

	free(d->name);

	free(d);
}

/**
 * Lexique utilisé dans cette exercice,
 * - structure (structure) : Une collection de variables
 * regroupées sous un même type.
 * - pointeur (pointer) : Une variable contenant l'adresse
 *   d'une autre variable.
 * - NULL : Valeur spéciale indiquant qu'un pointeur ne
 *   pointe vers rien.
 * Rappels des notions utilisées
 * - `struct dog *d` : Déclare un pointeur vers une
 *   structure `dog`, permettant d'accéder à ses membres.
 * - `if (d == NULL) return;` : Vérifie si `d` est NULL pour
 *   éviter un accès mémoire invalide.
 * - `d->name` : Utilise l'opérateur `->` pour accéder aux
 *   membres de la structure via un pointeur.
 * - `printf("...")` : Fonction pour afficher du texte sur
 *   la sortie standard.
 */
