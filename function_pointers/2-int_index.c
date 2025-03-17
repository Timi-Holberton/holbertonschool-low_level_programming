#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Recherche l'index du premier élément satisfaisant une condition.
 * @array: Pointeur vers le tableau d'entiers.
 * @size: Nombre d'éléments dans le tableau.
 * @cmp: Pointeur vers une fonction de comparaison.
 *
 * Cette fonction parcourt le tableau et applique la fonction @cmp
 * sur chaque élément. Si @cmp retourne une valeur différente de 0,
 * l'index de l'élément est renvoyé.
 *
 * Return: L'index du premier élément trouvé, ou -1 si aucun ne correspond.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* Déclare un indice pour parcourir le tableau */

	/* Vérifie si les paramètres sont valides */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* Parcourt le tableau */
	for (i = 0; i < size; i++)
	{
		/* Vérifie si l'élément satisfait la fonction cmp */
		if (cmp(array[i]) != 0)
		{
			return (i); /* Retourne l'index de l'élément trouvé */
		}
	}
	return (-1); /* Retourne -1 si aucun élément ne correspond */
}
