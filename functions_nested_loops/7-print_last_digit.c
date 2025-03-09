#include "main.h"

/**
 * print_last_digit - Affiche et retourne le dernier chiffre d'un nombre.
 * @nbre: Le nombre dont on veut extraire le dernier chiffre.
 *
 * Return: Le dernier chiffre absolu.
 */
int print_last_digit(int nbre)
{
    int last_digit = nbre % 10; // Récupérer le dernier chiffre

    if (last_digit < 0)  // S'assurer qu'il est positif
        last_digit = -last_digit;

    _putchar(last_digit + '0'); // Affichage du caractère

    return last_digit;
}

