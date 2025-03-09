#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Inverse l'ordre des éléments dans un tableau d'entiers.
 * @a: Tableau d'entiers à inverser.
 * @n: Nombre d'éléments dans le tableau.
 *
 * Return: Toujours 0 (Succès), mais la fonction est de type `void`.
 */
void reverse_array(int *a, int n)
{
    int i, j, echange;

    i = 0; /* Initialisation de i à 0 pour commencer par le premier élément */
    j = n - 1; /* Initialisation de j à la dernière position du tableau (n - 1) */

    /* Inverse les éléments tant que i est inférieur à j */
    while (i < j)
    {
        echange = a[i]; /* Sauvegarde de l'élément à l'index i */
        a[i] = a[j]; /* Remplace l'élément à l'index i par celui à l'index j */
        a[j] = echange; /* Remplace l'élément à l'index j par l'élément sauvegardé dans echange */

        i++; /* Incrémente i pour passer à l'élément suivant */
        j--; /* Décrémente j pour passer à l'élément précédent */
    }
}  /* Pas de return (0) car la fonction est de type void */

/**
 * Lexique :
 * - `int *a` : Pointeur vers un tableau d'entiers à inverser. Le tableau
 * est modifié en place.
 * - `int n` : Nombre d'éléments dans le tableau, utilisé pour définir
 * la fin du tableau.
 * - `i` : Un index qui commence à 0 et s'incrémente pour parcourir
 * le tableau du début.
 * - `j` : Un index qui commence à la fin du tableau (n - 1) et se décrémente.
 * - `echange` : Variable temporaire utilisée pour stocker un élément
 * pendant l'inversion.
 *
 * Notions de base :
 * - **Pointeurs** : Le paramètre `int *a` est un pointeur qui permet
 * de modifier directement les éléments du tableau. En C, les tableaux
 * sont passés par référence à la fonction, ce qui permet de les modifier
 * dans cette fonction sans avoir besoin de les retourner.
 * - **Boucle `while`** : La boucle `while` continue tant que `i` est
 * inférieur à `j`. Cela permet d'échanger les éléments du début avec ceux
 * de la fin sans dépasser le centre du tableau.
 * - **Échange de valeurs** : L'échange de valeurs entre deux éléments
 * du tableau est effectué en utilisant une variable temporaire
 * (`echange`) pour éviter d'écraser une des valeurs pendant l'échange.
 * - **Incrémentation et décrémentation** : Les indices `i` et `j` sont
 * modifiés pour parcourir le tableau dans les deux directions opposées,
 * permettant ainsi d'inverser les éléments.
 */
