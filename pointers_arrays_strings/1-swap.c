#include <stdio.h>
#include "main.h"

/**
 * swap_int - Échange les valeurs de deux entiers.
 * @a: Pointeur vers le premier entier.
 * @b: Pointeur vers le deuxième entier.
 *
 * Return: Ne renvoie rien (fonction de type void).
 */

void swap_int(int *a, int *b)
{
    int c;  /* Déclaration d'une variable temporaire pour l'échange */

    c = *a;  /* Sauvegarde la valeur pointée par a dans c */
    *a = *b;  /* Assigne la valeur pointée par b à a */
    *b = c;  /* Assigne la valeur sauvegardée de a à b */
}

/**
 * Lexique :
 * - `int *`: Pointeur vers un entier, utilisé pour manipuler la mémoire
 *   des variables en C.
 * - `*a`, `*b`: Les opérateurs `*` sont utilisés pour accéder à la valeur
 *   pointée par un pointeur.
 * - `void`: Type de retour qui signifie que la fonction ne renvoie rien.
 * - `=`, `*`: L'opérateur `=` assigne une valeur. L'opérateur `*` est
 *   utilisé pour déférer (accéder à la valeur) du pointeur.
 *
 * Notions de base :
 * - **Pointeurs** : Un pointeur est une variable qui contient l'adresse
 *   d'une autre variable. Par exemple, `int *a` est un pointeur vers
 *   un entier, et `*a` permet d'accéder à la valeur de l'entier.
 * - **Échange de valeurs** : Cette fonction permet d'échanger les valeurs
 *   de deux entiers en utilisant une variable temporaire (ici `c`).
 * - **Passage par adresse** : Les pointeurs permettent de passer des
 *   variables par adresse dans les fonctions. Cela permet de modifier
 *   directement les valeurs des variables d'origine.
 */
