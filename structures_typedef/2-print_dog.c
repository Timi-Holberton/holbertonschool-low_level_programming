#include <stdio.h>  /* Inclut stdio.h pour les entrées/sorties */
#include <stdlib.h> /* Inclut stdlib.h pour la gestion mémoire */
#include "dog.h"    /* Inclut le fichier d'en-tête dog.h */

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
			return;    /* Si oui, on quitte la fonction */
		}

	if (d->name == NULL)  /* Vérifie si le nom est NULL */
		{
			printf("Name: (nil)\n");
		}
	else
		{
			printf("Name: %s\n", d->name);
		}
	if (d->age == 0)  /* Vérifie si l'âge est 0 */
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

/**
 * Lexique :
 * - structure (structure) : Une collection de variables
 *   regroupées sous un même type.
 * - pointeur (pointer) : Une variable contenant l'adresse
 *   d'une autre variable.
 * - NULL : Valeur spéciale indiquant qu'un pointeur ne
 *   pointe vers rien.
 *
 * Rappels des notions utilisées :
 * - `struct dog *d` : Déclare un pointeur vers une
 *   structure `dog`, permettant d'accéder à ses membres.
 * - `if (d == NULL) return;` : Vérifie si `d` est NULL pour
 *   éviter un accès mémoire invalide.
 * - `d->name` : Utilise l'opérateur `->` pour accéder aux
 *   membres de la structure via un pointeur.
 * - `printf("...")` : Fonction pour afficher du texte sur
 *   la sortie standard.
 */
