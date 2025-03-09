#include "main.h"

/*
 * _isdigit - Vérifie si c est un chiffre
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est un chiffre, sinon 0.
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')  /* Vérifie si c est un chiffre */
        return (1);
    else
        return (0);
}
