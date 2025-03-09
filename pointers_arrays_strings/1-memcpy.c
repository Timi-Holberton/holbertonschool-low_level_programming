#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Permet de copier un bloc de mémoire d'un emplacement
 * à un autre.
 * @dest: Destination de la copie
 * @src: Source de la copie
 * @n: Nombre de bytes à copier
 *
 * Return: Toujours `dest` (destination après la copie)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i; /* Compteur pour la boucle */

    /* Boucle pour parcourir les n premiers octets + arriver à \0 */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];  /* Copier chaque byte de src dans dest */
    }

    /* Si la chaîne src est plus courte que n, remplir le reste avec '\0' */
    for (; i < n; i++)
    {
        dest[i] = '\0';  /* Remplir avec des octets nuls après la fin de src */
    }

    return (dest);  /* Retourner le pointeur de destination */
}

/**
 * Lexique :
 * - `char *`: Pointeur vers un caractère, utilisé pour manipuler des
 *   chaînes de caractères ou des blocs de mémoire.
 * - `unsigned int`: Type entier qui ne prend que des valeurs positives,
 *   utilisé ici pour définir le nombre de bytes à copier.
 * - `\0`: Le caractère nul qui marque la fin d'une chaîne de caractères en C.
 * - `return`: Utilisé pour renvoyer le pointeur de destination après la copie.
 *
 * Notions de base :
 * - **Pointeurs** : Les pointeurs comme `char *` permettent d'accéder à
 *   directement à la mémoire d'un tableau ou d'une chaîne de caractères.
 * - **Boucles `for`** : Les boucles `for` sont utilisées ici pour parcourir
 *   chaque byte de `src` et le copier dans `dest`. La deuxième boucle
 *   s'assure de remplir la fin de `dest` avec des octets nuls (`'\0'`) si
 *   la source est plus petite que `n`.
 * - **Bloc mémoire** : La fonction `memcpy` est utilisée pour copier un
 *   bloc de mémoire d'une source vers une destination. Cela peut être utile
 *   pour manipuler des données binaires ou des structures.
 */
