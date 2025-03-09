#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Affiche une chaîne de caractères en sens inverse
 *                        de manière récursive.
 * @s: Chaîne de caractères à afficher en sens inverse.
 * Return: Aucun retour (fonction void).
 *
 * Explications :
 * - La fonction affiche la chaîne `s` de manière récursive, mais dans l'ordre inverse.
 * - Elle fonctionne en appelant la fonction récursivement sur le caractère suivant
 *   avant d'afficher le caractère courant. Cela permet d'afficher les caractères
 *   dans l'ordre inverse de la chaîne.
 * - La condition de récursion est quand le caractère est supérieur à '\0',
 *   ce qui permet de parcourir toute la chaîne.
 */
void _print_rev_recursion(char *s)
{
    if (*s > '\0')              /* Condition de récursion, tant que le caractère est non nul */
    {
        _print_rev_recursion(s + 1); /* Appel récursif avec le caractère suivant */
        _putchar(*s);             /* Affiche le caractère courant après l'appel récursif */
    }
}

/**
 * Lexique :
 * - Récursion (Recursion) : Technique où une fonction s'appelle elle-même. Ici, chaque appel récursif traite un caractère de la chaîne, et l'affichage est effectué après avoir atteint la fin de la chaîne.
 * - Chaîne de caractères (String) : Une séquence de caractères terminée par un caractère nul ('\0'). Exemple : "Hello".
 * - Caractère (Character) : Un symbole unique, par exemple, 'a', 'b', etc. Les caractères sont manipulés via leur valeur ASCII.
 * - Sens inverse (Reverse order) : Affichage des caractères dans l'ordre inverse, ce qui est accompli en affichant le dernier caractère en premier, après que tous les appels récursifs aient été réalisés.
 * - Condition de fin (Base case) : La condition de fin de la récursion est atteinte lorsque le caractère est nul ('\0'), marquant la fin de la chaîne.

 * Rappel des notions de base :
 * - Pointeurs (Pointers) : `s` est un pointeur vers la chaîne de caractères. Il permet d'accéder à chaque caractère de la chaîne de manière séquentielle.
 * - Récursion (Recursion) : La fonction s'appelle elle-même pour traiter chaque caractère jusqu'à ce que la fin de la chaîne soit atteinte.
 * - Affichage (Display) : La fonction `_putchar` est utilisée pour afficher un caractère à la fois. L'affichage des caractères dans l'ordre inverse est assuré par le fait que le caractère est imprimé après l'appel récursif.
 */
