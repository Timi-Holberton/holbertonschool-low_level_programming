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

/**
 * Lexique :
 * - Pointeur (Pointer) : Une variable qui contient l'adresse mémoire d'une autre variable. Ici, le pointeur 'a' pointe vers le premier élément de la matrice.
 * - Diagonale (Diagonal) : Ligne ou colonne traversant une matrice de coins opposés. Une diagonale est utilisée pour accéder aux éléments `a[i][i]` ou `a[i][size-1-i]`.
 * - Somme (Sum) : L'addition des éléments d'un ensemble de nombres.
 * - Matrice (Matrix) : Une structure de données composée de lignes et de colonnes, utilisée ici sous forme d'un tableau 1D.

 * Rappel des notions de base :
 * - Tableaux (Arrays) : Un tableau en C est une structure de données qui contient plusieurs éléments de même type et permet d'accéder à ces éléments par un indice.
 * - Pointeurs (Pointers) : Les pointeurs sont utilisés pour référencer la mémoire de variables. Ils sont utilisés ici pour manipuler des éléments dans un tableau 1D représentant une matrice.
 * - Itération (Iteration) : Utilisation de boucles (comme `for`) pour parcourir une collection de données, ici pour parcourir les éléments d'une matrice.
 */
