#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - Concatène jusqu'à n caractères de src à dest
 * @dest: Chaîne de destination
 * @src: Chaîne source
 * @n: Nombre maximal de caractères à copier depuis src
 *
 * Return: La chaîne de destination avec les caractères ajoutés
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    /* Trouver la fin de la chaîne dest */
    for (j = 0; dest[j] != '\0'; j++)
        ; /* Boucle vide pour trouver la fin */

    /* Ajouter jusqu'à n caractères de src à dest */
    for (i = 0; i < n && src[i] != '\0'; i++, j++)
    {
        dest[j] = src[i]; /* Copier chaque caractère de src dans dest */
    }

    dest[j] = '\0'; /* Ajouter un caractère nul à la fin de dest */

    return (dest); /* Retourner la chaîne de destination */
}

/**
 * Lexique :
 * - `char *`: Pointeur vers un caractère, utilisé pour manipuler
 *   des chaînes de caractères en C.
 * - `int`: Type entier, utilisé ici pour définir la limite de caractères
 *   à ajouter depuis la chaîne source.
 * - `\0`: Le caractère nul qui marque la fin d'une chaîne de caractères.
 * - `return`: Utilisé pour renvoyer la chaîne de destination après
 *   la concaténation.
 *
 * Notions de base :
 * - **Pointeurs** : Les pointeurs comme `char *` permettent de manipuler
 *   des chaînes de caractères ou des tableaux de caractères.
 * - **Boucles `for`** : La première boucle sert à trouver la fin de `dest`,
 *   tandis que la seconde ajoute les caractères de `src` à `dest`.
 * - **Concaténation de chaînes** : Cette fonction permet de concaténer
 *   une chaîne source à une chaîne destination, en ajoutant au maximum
 *   `n` caractères de la source à la destination.
 * - **Caractère nul (`\0`)** : Un caractère nul est ajouté à la fin
 *   de la chaîne destination pour indiquer la fin de la chaîne.
 */
