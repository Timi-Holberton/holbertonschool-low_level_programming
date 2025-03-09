#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copie jusqu'à n caractères de src vers dest.
 * @dest: Destination où les caractères seront copiés.
 * @src: Source des caractères à copier.
 * @n: Nombre de caractères à copier.
 *
 * Return: Un pointeur vers la chaîne dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i; /* Déclare un compteur pour parcourir les chaînes */

    /* Boucle pour copier chaque caractère de src dans dest */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i]; /* Copie le caractère de src dans dest */
    }

    /* Si src est plus court que n, on complète dest avec '\0' */
    for (; i < n; i++)
    {
        dest[i] = '\0'; /* Ajoute un caractère nul dans dest */
    }

    return (dest); /* Retourne le pointeur vers la chaîne dest */
}

/**
 * Lexique :
 * - `char *dest`: Pointeur vers la chaîne de destination.
 * - `char *src`: Pointeur vers la chaîne source.
 * - `n`: Le nombre de caractères à copier de src vers dest.
 * - `'\0'`: Le caractère nul utilisé pour marquer la fin d'une chaîne.
 *
 * Notions de base :
 * - **Pointeurs** : Un pointeur est une variable qui contient l'adresse
 *   d'une autre variable. Dans cette fonction, `char *dest` et `char *src`
 *   sont des pointeurs vers des chaînes de caractères.
 * - **Boucle `for`** : La boucle `for` est utilisée pour parcourir les
 *   caractères de la chaîne source `src` et les copier dans la chaîne
 *   destination `dest`.
 * - **Caractère nul `'\0'`** : Ce caractère est utilisé pour marquer la
 *   fin d'une chaîne de caractères en C. Si la chaîne source est plus
 *   courte que `n`, des caractères nuls sont ajoutés à la fin de la
 *   chaîne destination.
 */
