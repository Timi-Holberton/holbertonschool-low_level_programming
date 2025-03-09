#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme génère un nombre aléatoire, puis détermine si
 * ce nombre est positif, négatif ou zéro, et affiche le résultat en conséquence.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    int n;

    /* Initialisation de la fonction srand avec le temps actuel pour générer un nombre aléatoire */
    srand(time(0));

    /* Génère un nombre aléatoire entre -(RAND_MAX / 2) et (RAND_MAX / 2) */
    n = rand() - RAND_MAX / 2;

    /* Si le nombre est positif, affiche qu'il est positif */
    if (n > 0)
    {
        printf("%d is positive\n", n);  /* Affiche le nombre et indique qu'il est positif */
    }
    /* Si le nombre est négatif, affiche qu'il est négatif */
    else if (n < 0)
    {
        printf("%d is negative\n", n);  /* Affiche le nombre et indique qu'il est négatif */
    }
    /* Si le nombre est égal à zéro, affiche qu'il est zéro */
    else
    {
        printf("%d is zero\n", n);  /* Affiche le nombre et indique qu'il est zéro */
    }

    return (0);  /* Indique que le programme s'est terminé avec succès */
}
