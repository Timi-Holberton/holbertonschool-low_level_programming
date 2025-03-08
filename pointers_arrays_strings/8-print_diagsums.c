#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calcule et affiche les sommes des deux diagonales
 *                  d'une matrice carrée.
 * @a: Pointeur vers le premier élément de la matrice stockée en 1D.
 * @size: Taille de la matrice (nombre de lignes et colonnes).
 *
 * Description:
 * - La matrice est stockée en mémoire comme un tableau 1D.
 * - La diagonale principale suit l'indexation `i * size + i`.
 * - La diagonale secondaire suit l'indexation `i * size + (size - 1 - i)`.
 */
void print_diagsums(int *a, int size)
{
	int i;          /* Indice pour parcourir la matrice */
	int diag1 = 0;  /* Somme des éléments de la diagonale principale */
	int diag2 = 0;  /* Somme des éléments de la diagonale secondaire */

	/* Parcours de la matrice pour additionner les valeurs des diagonales */
	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];               /* Diagonale principale */
		diag2 += a[i * size + (size - 1 - i)];  /* Diagonale secondaire */
	}

	/* Affichage des résultats */
	printf("%d, %d\n", diag1, diag2);
}
