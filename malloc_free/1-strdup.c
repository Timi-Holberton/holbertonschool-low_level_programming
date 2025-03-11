#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplique une chaîne de caractères dynamiquement.
 * @str: Chaîne à copier.
 *
 * Return: Pointeur vers la nouvelle chaîne ou NULL si échec.
 */
char *_strdup(char *str)
{
    int i, j; /* Variables pour les index */
    char *dest; /* Pointeur vers la copie de la chaîne */

    /* Vérifier si str est NULL */
    if (str == NULL)
    {
        return (NULL); /* Retourne NULL si str est vide */
    }

    /* Calculer la longueur de str */
    for (i = 0; str[i] != '\0'; i++)
        ; /* Boucle vide pour compter la taille */

    /* Allouer de la mémoire pour la copie */
    dest = malloc((i + 1) * sizeof(char));

    /* Vérifier si l'allocation a échoué */
    if (!dest)
    {
        return (NULL); /* Retourne NULL si malloc échoue */
    }

    /* Copier les caractères de str vers dest */
    for (j = 0; str[j] != '\0'; j++)
    {
        dest[j] = str[j]; /* Copie caractère par caractère */
    }

    dest[j] = '\0'; /* Ajouter le caractère nul à la fin */

    return (dest); /* Retourner le pointeur vers la copie */
}

/**
 * Lexique :
 * - `char *` : Pointeur vers une chaîne de caractères.
 * - `malloc` : Fonction qui alloue dynamiquement de la mémoire.
 * - `NULL` : Valeur indiquant qu'un pointeur ne pointe nulle part.
 * - `return` : Instruction pour retourner une valeur.
 * - `\0` : Caractère de fin d'une chaîne en C.
 *
 * Notions de base :
 * - **Pointeurs** : Utilisés pour manipuler des chaînes en mémoire.
 * - **Allocation dynamique** : `malloc` permet d'obtenir de la mémoire
 *   pour stocker une copie de la chaîne.
 * - **Boucles `for`** : Utilisées ici pour parcourir et copier `str`.
 * - **Caractère nul `\0`** : Ajouté à la fin pour marquer la fin de `dest`.
 */
