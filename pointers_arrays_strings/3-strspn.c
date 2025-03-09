#include "main.h"

/**
 * _strspn - Retourne la longueur du préfixe de 's'
 *           qui contient uniquement des caractères présents dans 'accept'.
 * @s: Chaîne à analyser.
 * @accept: Caractères autorisés.
 *
 * Return: Le nombre de caractères valides au début de 's'.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;

    /* Parcourt chaque caractère de 's' */
    for (i = 0; s[i] != '\0'; i++)
    {
        /* Vérifie si s[i] est dans 'accept' */
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
                break; /* Trouvé, on passe au suivant */
        }

        /* Si s[i] n'est pas trouvé dans 'accept', on arrête */
        if (accept[j] == '\0')
            break;
    }

    /* Retourne le nombre de caractères valides */
    return (i);
}

/**
 * Lexique :
 * - `char *s` : Un pointeur vers la chaîne de caractères à analyser.
 * - `char *accept` : Un pointeur vers la chaîne de caractères autorisés.
 * - `return (i)` : Retourne le nombre de caractères valides trouvés au début de 's'.
 *
 * Notions de base :
 * - **Pointeurs** : Les paramètres `char *s` et `char *accept` sont des pointeurs qui pointent vers des chaînes de caractères.
 *   Cela permet de manipuler directement les chaînes de caractères en mémoire.
 * - **Boucle `for`** : La boucle `for` permet de parcourir la chaîne 's' et de comparer chaque caractère avec ceux de 'accept'.
 *   Si un caractère n'appartient pas à 'accept', la fonction s'arrête.
 * - **Caractères dans une chaîne** : Chaque caractère de 's' est comparé à tous les caractères de 'accept'. Si un caractère est
 *   trouvé dans 'accept', on passe au suivant.
 * - **Retour du nombre de caractères** : Lorsque la première occurrence d'un caractère non autorisé est rencontrée, on retourne
 *   le nombre de caractères valides jusqu'à ce moment.
 */
