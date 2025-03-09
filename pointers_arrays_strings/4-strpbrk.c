#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Recherche dans une chaîne de caractères la première
 * occurrence d'un caractère parmi une liste de caractères autorisés.
 * @s: Chaîne à analyser.
 * @accept: Liste de caractères autorisés.
 *
 * Return: Un pointeur vers la première occurrence trouvée dans `s`,
 * ou NULL si aucune correspondance n'est trouvée.
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j; /* Variables pour parcourir 's' et 'accept' */

    /* Parcourt chaque caractère de 's' jusqu'à la fin de la chaîne */
    for (i = 0; s[i] != '\0'; i++)
    {
        /* Vérifie si le caractère courant de 's' existe dans 'accept' */
        for (j = 0; accept[j] != '\0'; j++)
        {
            /* Si on trouve une correspondance entre s[i] et accept[j] */
            if (s[i] == accept[j])
                return (&s[i]); /* Retourne l'adresse de s[i] où la correspondance est trouvée */
        }
    }

    /* Si aucun caractère n'est trouvé dans 'accept', retourne NULL */
    return (0); /* Aucun caractère de 's' n'est dans 'accept' */
}

/**
 * Lexique :
 * - `char *s`: Pointeur vers la chaîne de caractères à analyser.
 * - `char *accept`: Pointeur vers la chaîne des caractères autorisés.
 * - `i` : Un index pour parcourir la chaîne `s`.
 * - `j` : Un index pour parcourir la chaîne `accept`.
 *
 * Notions de base :
 * - **Pointeurs** : Les paramètres `char *s` et `char *accept` sont des pointeurs
 * qui permettent de manipuler directement les chaînes de caractères.
 * - **Boucle `for`** : Les boucles `for` sont utilisées pour parcourir chaque
 * caractère des chaînes de caractères, permettant de comparer les éléments
 * de `s` avec ceux de `accept`.
 * - **Retour d'adresse** : Lorsque l'on trouve une correspondance entre un
 * caractère de `s` et un de `accept`, la fonction retourne un pointeur
 * vers la position de ce caractère dans la chaîne `s`.
 * - **Retour `NULL`** : Si aucune correspondance n'est trouvée, la fonction
 * retourne `NULL` pour signaler qu'il n'y a pas de caractère commun.
 * En informatique, "occurrence" fait souvent référence à l'existence ou à la
 * fréquence d'un élément spécifique dans une structure de données, comme une
 * chaîne, un tableau ou une liste.
 * /
