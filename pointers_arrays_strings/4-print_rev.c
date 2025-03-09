#include <stdio.h>
#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères à l'envers.
 * @s: Chaîne de caractères à inverser et afficher.
 *
 * Return: Toujours 0 (Succès).
 */
void print_rev(char *s)
{
    int i = 0;
    int j;

    /* Trouve la longueur de la chaîne en comptant jusqu'à '\0' */
    while (s[i] != '\0')
    {
        i++; /* Incrémentation du compteur pour parcourir la chaîne */
    }

    /* Affiche les caractères de la chaîne en ordre inverse */
    for (j = i - 1; j >= 0; j--)
    {
        _putchar(s[j]); /* Affiche le caractère courant de la fin vers le début */
    }
    _putchar('\n'); /* Ajoute un saut de ligne après l'affichage */
}

/**
 * Lexique :
 * - `char *s` : Un pointeur vers une chaîne de caractères à afficher.
 * - `i` : Un compteur pour trouver la longueur de la chaîne.
 * - `j` : Un compteur utilisé pour parcourir la chaîne à l'envers.
 * - `_putchar(s[j])` : Affiche le caractère à la position j de la chaîne.
 *
 * Notions de base :
 * - **Pointeurs** : Le paramètre `char *s` est un pointeur qui pointe vers une chaîne de caractères. Il permet d'accéder à chaque
 *   caractère de la chaîne en mémoire.
 * - **Boucles `while` et `for`** : La boucle `while` sert à parcourir la chaîne pour déterminer sa longueur. Ensuite, une boucle `for`
 *   parcourt la chaîne à l'envers en affichant chaque caractère.
 * - **Affichage** : Le caractère courant est affiché avec `_putchar(s[j])` pour chaque itération de la boucle inversée.
 * - **Caractère de fin de chaîne** : Le caractère `'\0'` marque la fin de la chaîne et est utilisé pour déterminer la longueur de la chaîne.
 */
