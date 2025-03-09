#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Affiche les nombres de 0 à 14, 10 fois
 *
 * Return: Toujours 0 (Succès)
 */
void more_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)  /* Affiche 10 fois les nombres de 0 à 14 */
    {
        int j;
        char tableau[] = "01234567891011121314";  /* Nombres à afficher */

        for (j = 0; j <= 19; j++)  /* Parcours de 0 à 14 */
        {
            _putchar(tableau[j]);
        }
        _putchar('\n');  /* Retour à la ligne après chaque affichage */
    }
}
