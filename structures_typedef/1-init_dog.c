#include <stdio.h>  /* Inclut stdio.h pour les entrées/sorties */
#include <stdlib.h> /* Inclut stdlib.h pour la gestion mémoire */
#include "dog.h"    /* Inclut le fichier d'en-tête dog.h */

/**
 * init_dog - Initialise une structure de type `dog`
 * @d: Pointeur vers la structure `dog` à initialiser
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre flottant)
 * @owner: Propriétaire du chien (chaîne de caractères)
 *
 * Cette fonction initialise une structure `dog` avec les
 * valeurs passées en paramètres. Si `d` est NULL, la
 * fonction ne fait rien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* Vérifie si le pointeur est NULL */
		return;    /* Si oui, on quitte la fonction */

	d->name = name;   /* Affecte le nom à la structure */
	d->age = age;     /* Affecte l'âge à la structure */
	d->owner = owner; /* Affecte le propriétaire */
}

/**
 * Lexique :
 * - structure (structure) : Une collection de variables
 *   regroupées sous un même type.
 * - pointeur (pointer) : Une variable contenant l'adresse
 *   d'une autre variable.
 *
 * Rappels des notions utilisées :
 * - `struct dog *d` : Déclare un pointeur vers une
 *   structure `dog`, permettant de modifier son contenu.
 * - `if (d == NULL) return;` : Vérifie si `d` est NULL pour
 *   éviter un accès mémoire invalide.
 * - `d->name = name;` : Utilise l'opérateur `->` pour
 *   accéder aux membres de la structure via un pointeur.
 */

