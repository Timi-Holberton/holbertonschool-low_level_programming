#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Affiche une chaîne de caractères de manière récursive.
 * @s: Chaîne de caractères à afficher.
 * Return: Aucun retour (fonction void).
 *
 * Explications :
 * - La fonction affiche la chaîne `s` caractère par caractère.
 * - Elle fonctionne de manière récursive en affichant un caractère,
 *   puis en appelant la fonction pour afficher le caractère suivant.
 * - La condition de fin de récursion est lorsque le caractère '\0' est atteint.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')     /* Condition de fin, si le caractère est '\0' */
    {
        _putchar('\n');  /* Affiche un saut de ligne */
        return;          /* Fin de la récursion */
    }
    _putchar(*s);        /* Affiche le caractère courant */
    _puts_recursion(s + 1);  /* Appel récursif avec le caractère suivant */
}

/**
 * Lexique :
 * - Récursion (Recursion) : Une technique où une fonction s'appelle elle-même. Ici, la fonction `_puts_recursion` s'appelle jusqu'à atteindre la fin de la chaîne.
 * - Chaîne de caractères (String) : Une séquence de caractères terminée par un caractère nul ('\0'). Exemple : "Hello".
 * - Caractère (Character) : Un symbole unique, par exemple, 'a', 'b', etc. Les caractères sont manipulés via leur valeur ASCII.
 * - Saut de ligne (Newline) : Le caractère spécial '\n' qui provoque un retour à la ligne lors de l'affichage.

 * Rappel des notions de base :
 * - Pointeurs (Pointers) : Un pointeur est une variable qui contient l'adresse mémoire d'une autre variable. Ici, `s` est un pointeur vers la chaîne de caractères.
 * - Récursion (Recursion) : La récursion consiste à appeler une fonction dans son propre corps. Dans ce cas, chaque appel récursif traite un caractère de la chaîne.
 * - Condition de fin (Base case) : Une condition qui met fin à la récursion, ici lorsque le caractère est '\0', ce qui marque la fin de la chaîne.
 * - Affichage (Display) : La fonction `_putchar` est utilisée pour afficher un caractère à la fois, et la fonction affiche également un saut de ligne après avoir parcouru toute la chaîne.
 */
