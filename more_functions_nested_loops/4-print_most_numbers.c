#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9 sauf 2 et 4
 *
 * Return: Toujours 0 (Succès)
 */
void print_most_numbers(void)
{
    char a;

    for (a = '0'; a <= '9'; a++)  /* Parcours des chiffres de 0 à 9 */
        if (a != '2' && a != '4')  /* Ignore 2 et 4 */
            _putchar(a);

    _putchar('\n');  /* Retour à la ligne après l'affichage */
}
