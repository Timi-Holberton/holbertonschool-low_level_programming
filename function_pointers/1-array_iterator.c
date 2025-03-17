#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Applique une fonction sur chaque élément d'un tableau.
 * @array: Pointeur vers le tableau d'entiers.
 * @size: Taille du tableau.
 * @action: Pointeur vers une fonction prenant un int en paramètre.
 *
 * Cette fonction parcourt le tableau et applique la fonction @action
 * sur chaque élément du tableau.
 *
 * Return: Rien.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* Déclare un indice pour parcourir le tableau */

	/* Vérifie si les paramètres sont valides */
	if (array != NULL && action != NULL && size > 0)
	{
		/* Parcourt chaque élément du tableau */
		for (i = 0; i < size; i++)
		{
			/* Applique la fonction action sur l'élément actuel */
			action(array[i]);
		}
	}
}
