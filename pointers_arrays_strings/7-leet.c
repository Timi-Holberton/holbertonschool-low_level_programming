#include "main.h"
#include <stdio.h>

/**
 * leet - Remplace certaines lettres par des chiffres.
 * @tab : Tableau de caractères à modifier.
 *
 * Return: Le tableau modifié avec les lettres remplacées.
 */
char *leet(char *tab)
{
	int i, j;
	char lettre[] = "aAeEoOtTlL"; /* Lettres à remplacer */
	char nombre[] = "4433007711"; /* Correspondance numérique */

	/* Parcourt chaque caractère de la chaîne */
	for (i = 0; tab[i] != '\0'; i++)
	{
		/* Vérifie chaque lettre pour voir si elle doit être remplacée */
		for (j = 0; lettre[j] != '\0'; j++)
		{
			/* Si une lettre correspond, on la remplace par le chiffre */
			if (tab[i] == lettre[j])
			{
				tab[i] = nombre[j]; /* Remplace la lettre par le chiffre */
			}
		}
	}
	return (tab); /* Retourne le tableau modifié */
}

/*
* Lexique :
* - Tableau : Array, une collection de variables du même type.
* - Remplacer : Replace, changer un élément par un autre.
* - Correspondance : Matching, trouver un équivalent ou une relation
*   entre deux éléments.
* - Chiffre : Number, un symbole numérique utilisé pour représenter
*   une valeur.
*
* Notions de base :
* - Boucle for : Permet de parcourir chaque caractère dans le tableau.
* - Condition if : Permet de vérifier si le caractère actuel doit
*   être remplacé.
* - Tableau de caractères : String array, un tableau qui contient une
*   séquence de caractères.
* - Correspondance de caractères : Remplacer les lettres spécifiques
*   par des chiffres.
*/
