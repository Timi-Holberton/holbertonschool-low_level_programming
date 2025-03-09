#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatène deux chaînes de caractères
 * @dest: Chaîne de destination
 * @src: Chaîne source à ajouter à la fin de `dest`
 *
 * Return: Toujours `dest` (chaîne concaténée)
 */

char *_strcat(char *dest, char *src)
{
    int i = 0;  /* Indice pour parcourir la chaîne de destination */
    int j = 0;  /* Indice pour parcourir la chaîne source */

    /* Trouver la fin de la chaîne `dest` */
    while (dest[i] != '\0')
        i++;

    /* Ajouter chaque caractère de `src` à la fin de `dest` */
    while (src[j] != '\0')
    {
        dest[i] = src[j];  /* Copier le caractère de `src` dans `dest` */
        j++;
        i++;
    }
    dest[i] = '\0';  /* Terminer la chaîne résultante par un caractère nul */

    return (dest);  /* Retourner la chaîne concaténée */
}

/**
 * Lexique :
 * - `char *`: Pointeur vers un caractère, utilisé pour travailler avec
 *   des chaînes de caractères en C.
 * - `'\0'`: Le caractère nul marque la fin d'une chaîne de caractères
 *   en C. Il est essentiel pour déterminer la longueur d'une chaîne.
 * - `return`: Utilisé pour renvoyer la chaîne concaténée à l'appelant.
 *
 * Notions de base :
 * - **Pointeurs** : Le type `char *` est un pointeur vers un caractère,
 *   permettant d'accéder aux caractères d'une chaîne de manière
 *   séquentielle. Le pointeur est utilisé pour manipuler et modifier
 *   les chaînes directement.
 * - **Boucles `while`** : La première boucle `while` sert à trouver la fin
 *   de la chaîne `dest`, et la deuxième boucle sert à copier les caractères
 *   de `src` à la fin de `dest`. Chaque boucle termine lorsque la fin de
 *   la chaîne est atteinte, ce qui est marqué par le caractère nul `'\0'`.
 * - **Chaînes de caractères** : En C, une chaîne de caractères est un
 *   tableau de caractères qui se termine toujours par un caractère nul
 *   `'\0'`. Cela permet de savoir où finit la chaîne.
 */
