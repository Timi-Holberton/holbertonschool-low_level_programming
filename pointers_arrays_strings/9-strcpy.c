#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - Copie une chaîne de caractères dans une autre.
 * @dest: Tableau où la chaîne source sera copiée.
 * @src: Chaîne source à copier.
 * Return: Retourne la chaîne de destination.
 *
 * Explications :
 * - La fonction parcourt la chaîne source (`src`) caractère par caractère.
 * - Chaque caractère de `src` est copié dans le tableau de destination (`dest`).
 * - La fonction s'arrête lorsque le caractère de fin de chaîne (`'\0'`) est trouvé dans `src`.
 * - Enfin, elle ajoute un caractère de fin de chaîne (`'\0'`) à la fin de la chaîne de destination (`dest`).
 */
char *_strcpy(char *dest, char *src) /* destination, source */
{
    int i;

    /* Parcours de la chaîne source pour copier caractère par caractère */
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];  /* Copier le caractère de src dans dest */
    }

    /* Ajouter le caractère de fin de chaîne à la fin de dest */
    dest[i] = '\0';

    return (dest);  /* Retourner la chaîne copiée dans dest */
}

/**
 * Lexique :
 * - Chaîne de caractères (String) : Une séquence de caractères terminée par un caractère nul ('\0'). Exemple : "Hello".
 * - Tableau (Array) : Une collection d'éléments du même type. En C, les tableaux sont indexés à partir de 0.
 * - Copie (Copy) : L'opération de déplacer les données d'une zone mémoire vers une autre.
 * - Pointeur (Pointer) : Une variable qui stocke l'adresse mémoire d'une autre variable. Les chaînes en C sont en réalité des pointeurs vers leurs premiers caractères.
 * - Caractère nul (Null Character) : Le caractère spécial '\0' marque la fin d'une chaîne de caractères en C.

 * Rappel des notions de base :
 * - Tableaux (Arrays) : Les tableaux sont utilisés pour stocker des collections d'éléments du même type. Ici, `dest` et `src` sont des tableaux de caractères.
 * - Pointeurs (Pointers) : En C, un tableau est traité comme un pointeur. Les chaînes sont souvent manipulées en utilisant des pointeurs vers leurs premiers éléments.
 * - Itération (Iteration) : L'utilisation de boucles (comme `for`) pour parcourir chaque élément d'une structure de données.
 * - Caractères et chaînes (Characters and Strings) : Les chaînes de caractères sont des séquences de caractères terminées par '\0', et chaque caractère peut être manipulé individuellement.
 */
