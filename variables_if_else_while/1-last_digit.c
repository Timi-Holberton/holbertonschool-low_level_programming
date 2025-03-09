#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme génère un nombre aléatoire et affiche le dernier
 * chiffre de ce nombre avec des informations supplémentaires sur sa valeur
 * par rapport à 5 ou 0.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    int n;

    /* Initialisation du générateur de nombres aléatoires avec le temps actuel */
    srand(time(0));

    /* Génère un nombre aléatoire entre -(RAND_MAX / 2) et (RAND_MAX / 2) */
    n = rand() - RAND_MAX / 2;

    /* Si le dernier chiffre est supérieur à 5, affiche ce message */
    if ((n % 10) > 5)
    {
        /* Affiche le dernier chiffre et indique qu'il est supérieur à 5 */
        printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
    }
    /* Si le dernier chiffre est inférieur à 6 et différent de 0, affiche ce message */
    else if ((n % 10) < 6 && (n % 10) != 0)
    {
        /* Affiche le dernier chiffre et indique qu'il est inférieur à 6 et non nul */
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
    }
    /* Si le dernier chiffre est égal à 0, affiche ce message */
    else
    {
        /* Affiche le dernier chiffre et indique qu'il est égal à 0 */
        printf("Last digit of %d is %d and is 0\n", n, n % 10);
    }

    return (0);  /* Indique que le programme s'est terminé avec succès */
}
