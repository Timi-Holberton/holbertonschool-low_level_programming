#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9
 *
 * Return: Toujours 0 (Succès)
 */
void print_numbers(void)
{
    char a;

    for (a = '0'; a <= '9'; a++)  /* Affiche chaque chiffre de 0 à 9 */
        _putchar(a);

    _putchar('\n');  /* Retour à la ligne après l'affichage */
}
