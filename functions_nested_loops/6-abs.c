#include <stdio.h>
#include "main.h"

/*
 * _abs - Retourne la valeur absolue d'un nombre
 * @nbre: Le nombre dont on veut obtenir la valeur absolue
 *
 * Description: Cette fonction prend un entier et retourne sa valeur
 * absolue. Si le nombre est positif ou nul, il est retourné tel quel.
 * Si le nombre est négatif, sa valeur absolue est obtenue en multipliant
 * le nombre par -1.
 *
 * Return: La valeur absolue du nombre.
 */
int _abs(int nbre)
{
    /* Si le nombre est positif ou nul, on retourne directement sa valeur */
    if (nbre >= 0)
        return (nbre);

    /* Si le nombre est négatif, on retourne sa valeur absolue */
    return (-(nbre)); /* Multiplie le nombre par -1 pour obtenir sa valeur absolue */
}
