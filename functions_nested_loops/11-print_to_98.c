#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/*
 * print_to_98 - Affiche tous les entiers de n à 98
 * @n: La valeur de départ
 *
 * Description: Cette fonction prend un entier n et affiche tous les entiers
 * entre n et 98, inclus, dans l'ordre croissant si n est inférieur ou égal
 * à 98, et dans l'ordre décroissant si n est supérieur à 98. Chaque nombre
 * est suivi d'une virgule, sauf le dernier.
 *
 * Return: Cette fonction ne retourne rien (void).
 */
void print_to_98(int n)
{
    /* Si n est inférieur ou égal à 98, on affiche les nombres dans l'ordre croissant */
    if (n <= 98)
    {
        /* Affiche tous les entiers de n à 97 dans l'ordre croissant */
        while (n < 98)
            printf("%d, ", n++);  /* Affiche n et incrémente n */
    }
    else
    {
        /* Si n est supérieur à 98, on affiche les nombres dans l'ordre décroissant */
        while (n > 98)
            printf("%d, ", n--);  /* Affiche n et décrémente n */
    }
    printf("%d\n", n);  /* Affiche 98 sans virgule à la fin */
}
