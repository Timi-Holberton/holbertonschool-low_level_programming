#include <stdio.h>
#include "main.h"

/*
 * _islower - Vérifie si un caractère est une lettre minuscule
 * @c: Le caractère à tester (représenté par son code ASCII)
 *
 * Description: Cette fonction prend un entier représentant un
 * caractère ASCII et vérifie s'il s'agit d'une lettre minuscule.
 * Les lettres minuscules ont des codes ASCII compris entre 97 ('a')
 * et 122 ('z'). Si c est dans cette plage, la fonction retourne 1,
 * sinon elle retourne 0.
 *
 * Return: 1 si le caractère est une minuscule, 0 sinon.
 */
int _islower(int c)
{
    /* Vérifie si c est une lettre minuscule en utilisant les codes ASCII */
    if (c >= 97 && c <= 122)
    {
        return (1); /* Retourne 1 si c est une minuscule */
    }

    return (0); /* Retourne 0 si ce n'est pas une minuscule */
}
