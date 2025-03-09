#include <stdio.h>
#include "main.h"

/*
 * _isupper - Vérifie si le caractère est une lettre majuscule
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est une majuscule, sinon 0.
 */
int _isupper(int c)
{
    if (c >= 65 && c <= 90)  /* Vérifie si c est une majuscule */
        return (1);
    else
        return (0);
}
