#include <stdio.h>
#include "main.h"

/*
 * print_sign - Affiche le signe d'un nombre
 * @n: Le nombre dont on veut afficher le signe
 *
 * Description: Cette fonction prend un entier n et affiche son signe
 * sous forme de caractère ('+', '-', ou '0') en fonction de la valeur de n.
 * Elle retourne aussi un entier correspondant au signe de n :
 * - Retourne 1 si n est positif.
 * - Retourne -1 si n est négatif.
 * - Retourne 0 si n est égal à zéro.
 *
 * Return: 1 si n est positif, -1 si n est négatif, 0 si n est zéro.
 */
int print_sign(int n)
{
    /* Si n est négatif, on affiche '-' et retourne -1 */
    if (n < 0)
    {
        _putchar('-'); /* Affiche le signe négatif */
        return (-1);   /* Retourne -1 */
    }

    /* Si n est positif, on affiche '+' et retourne 1 */
    else if (n > 0)
    {
        _putchar('+'); /* Affiche le signe positif */
        return (1);    /* Retourne 1 */
    }

    /* Si n est égal à zéro, on affiche '0' et retourne 0 */
    else
    {
        _putchar('0'); /* Affiche le signe zéro */
        return (0);    /* Retourne 0 */
    }
}
