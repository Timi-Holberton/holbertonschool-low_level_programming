#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Réinitialise la valeur de la variable pointée à 98
 * @n: Pointeur vers la variable à modifier
 *
 * Return: Toujours 0 (Succès)
 */

void reset_to_98(int *n)
{
    *n = 98;  /* Définir la valeur pointée par n à 98 */
}

/**
 * Lexique :
 * - `int *`: Pointeur vers un entier. Le pointeur contient l'adresse
 *   de la variable à modifier.
 * - `*`: L'opérateur `*` est utilisé pour accéder à la valeur pointée
 *   par un pointeur.
 * - `return`: Utilisé pour renvoyer une valeur, ici sans retour
 *   car la fonction est de type `void`.
 *
 * Notions de base :
 * - Un **pointeur** (`int *`) est une variable qui contient l'adresse
 *   mémoire d'une autre variable. Ici, le pointeur permet de manipuler
 *   la valeur de la variable `n` directement à travers sa référence.
 * - L'opérateur **`*`** est utilisé pour déférer un pointeur, c'est-à-dire
 *   accéder à la valeur stockée à l'adresse mémoire pointée.
 * - La fonction **`reset_to_98`** prend un pointeur en paramètre et modifie
 *   la valeur de la variable pointée sans renvoyer de valeur.
 */
