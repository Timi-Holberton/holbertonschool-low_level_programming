#include <stdio.h>

/*
 * _isalpha - Vérifie si un caractère est une lettre de l'alphabet
 * @c: Le caractère à tester (représenté par son code ASCII)
 *
 * Description: Cette fonction prend un entier représentant un
 * caractère ASCII et vérifie s'il s'agit d'une lettre alphabétique.
 * Les lettres majuscules ont des codes ASCII entre 65 ('A') et 90 ('Z'),
 * et les lettres minuscules entre 97 ('a') et 122 ('z'). Si c est dans
 * l'une de ces plages, la fonction retourne 1, sinon elle retourne 0.
 *
 * Return: 1 si le caractère est une lettre de l'alphabet, 0 sinon.
 */
int _isalpha(int c)
{
    /* Vérifie si c est une lettre majuscule ou minuscule en utilisant les codes ASCII */
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1); /* Retourne 1 si c est une lettre de l'alphabet */

    return (0); /* Retourne 0 si ce n'est pas une lettre de l'alphabet */
}
