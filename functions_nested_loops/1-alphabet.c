#include <stdio.h>
#include "main.h"

/*
 * print_alphabet - Affiche l'alphabet en minuscules
 *
 * Description: Cette fonction affiche les lettres de 'a' à 'z'
 * en utilisant une boucle for. Chaque lettre est affichée avec
 * _putchar(). Une nouvelle ligne est ajoutée à la fin.
 *
 * Utilisation: Cette fonction ne prend aucun paramètre et ne
 * retourne rien (void). Elle est conçue pour être appelée
 * directement dans un programme.
 *
 * Return: Cette fonction ne retourne aucune valeur.
 */
void print_alphabet(void)
{
    char i; /* Déclaration de la variable pour parcourir l'alphabet */

    /* Boucle pour afficher les lettres de 'a' à 'z' */
    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i); /* Affiche la lettre actuelle */
    }

    _putchar('\n'); /* Ajoute un retour à la ligne après l'alphabet */
}
