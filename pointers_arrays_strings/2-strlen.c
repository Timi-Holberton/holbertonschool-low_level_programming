#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères dont on veut la longueur.
 *
 * Return: La longueur de la chaîne (sans le caractère de fin '\0').
 */

int _strlen(char *s)
{
    int i = 0;

    /* Parcourt la chaîne tant que le caractère courant n'est pas '\0' */
    while (i[s] != '\0')
    {
        i++;
    }

    return (i);  /* Retourne la longueur de la chaîne */
}

/**
 * Lexique :
 * - `char *s`: Pointeur vers une chaîne de caractères.
 * - `'\0'`: Le caractère nul, utilisé pour marquer la fin d'une chaîne.
 * - `i[s]`: C'est une notation équivalente à `*(s + i)`, utilisée pour
 *   accéder à l'élément à l'index `i` dans la chaîne `s`.
 *
 * Notions de base :
 * - **Pointeurs** : Un pointeur est une variable qui contient l'adresse
 *   d'une autre variable. Dans cette fonction, `char *s` est un pointeur
 *   vers une chaîne de caractères.
 * - **Boucle `while`** : La boucle `while` permet de parcourir la chaîne
 *   de caractères jusqu'à atteindre le caractère nul `'\0'`, qui marque
 *   la fin de la chaîne.
 * - **Notation avec indices** : `i[s]` est une notation particulière qui
 *   équivaut à `*(s + i)`, ce qui permet d'accéder au caractère à
 *   l'index `i` dans la chaîne `s`.
 */
