#include <stdio.h>
#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères suivie d'un saut de ligne.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 *
 * Return: Aucun retour, affiche directement sur la sortie standard.
 */
void _puts(char *str)
{
    int i = 0;

    /* Parcours de la chaîne de caractères jusqu'à la fin */
    while (i[str] != '\0')  /* Ou bien while (str[i] != '\0') */
    {
        _putchar(i[str]); /* Affiche chaque caractère de la chaîne */
        i++;
    }

    _putchar('\n');  /* Affiche une nouvelle ligne après la chaîne */
}

/**
 * Lexique :
 * - `char *str`: Un pointeur vers la chaîne de caractères à afficher.
 * - `'\0'`: Caractère nul utilisé pour marquer la fin d'une chaîne de caractères.
 * - `_putchar`: Fonction qui affiche un caractère à la sortie standard.
 *
 * Notions de base :
 * - **Pointeurs** : Le paramètre `char *str` est un pointeur vers une chaîne de
 *   caractères, ce qui permet de passer des chaînes de manière efficace et
 *   de les manipuler directement dans la mémoire.
 * - **Boucle `while`** : La boucle `while` permet de parcourir chaque caractère
 *   de la chaîne, en continuant tant que le caractère courant n'est pas nul
 *   (c'est-à-dire tant que la fin de la chaîne n'est pas atteinte).
 * - **Caractère nul `'\0'`** : Ce caractère marque la fin d'une chaîne de
 *   caractères en C. La boucle s'arrête lorsque ce caractère est rencontré.
 */
