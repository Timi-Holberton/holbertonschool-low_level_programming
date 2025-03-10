#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Crée un tableau de caractères et l'initialise
 * @size: Taille du tableau (nombre d'éléments)
 * @c: Caractère avec lequel initialiser le tableau
 *
 * Cette fonction alloue dynamiquement un tableau de `size` caractères,
 * puis initialise chaque élément avec le caractère `c`. Si `size` est
 * égal à 0 ou si l'allocation échoue, la fonction retourne NULL.
 *
 * Return: Pointeur vers le tableau alloué, ou NULL si échec
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i; /* Variable pour parcourir le tableau */

    /* Allocation dynamique d'un tableau de `size` caractères */
    char *tab = malloc(size * sizeof(char));

    /* Vérifie si la taille est nulle, retourne NULL si c'est le cas */
    if (size == 0)
    {
        return (NULL);
    }

    /* Vérifie si l'allocation a échoué, retourne NULL si c'est le cas */
    if (!tab)
    {
        return (NULL);
    }

    /* Remplit le tableau avec le caractère `c` */
    for (i = 0; i < size; i++)
    {
        tab[i] = c;
    }

    return (tab); /* Retourne le pointeur vers le tableau alloué */
}

/*
Lexique des termes techniques :
- Dynamic allocation (allocation dynamique) : réservation de mémoire à
  l'exécution via `malloc`.
- Pointer (pointeur) : variable contenant l'adresse mémoire d'une autre
  variable.
- Null pointer (pointeur NULL) : pointeur qui ne pointe sur aucune adresse
  valide.

Rappel des notions de base utilisées :
- Pointeurs : Un pointeur stocke une adresse mémoire et permet d'accéder
  indirectement à une valeur.
- Allocation dynamique : `malloc` permet de réserver de la mémoire à
  l'exécution, et il faut libérer cette mémoire avec `free` pour éviter
  les fuites mémoire.
- Boucle `for` : Utilisée ici pour parcourir le tableau et l'initialiser.
- Condition `if` : Permet de vérifier si `size` est nul ou si l'allocation
  a échoué, pour éviter d'utiliser un pointeur invalide.
*/
