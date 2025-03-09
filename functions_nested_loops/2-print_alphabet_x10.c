#include <stdio.h>
#include "main.h"

/*
 * print_alphabet_x10 - Affiche l'alphabet en minuscules 10 fois
 *
 * Description: Cette fonction affiche l'alphabet de 'a' à 'z'
 * dix fois. Chaque alphabet est affiché sur une nouvelle ligne.
 * La boucle externe contrôle le nombre de répétitions (10 fois),
 * tandis que la boucle interne affiche les lettres de l'alphabet.
 *
 * Return: Cette fonction ne retourne aucune valeur.
 */
void print_alphabet_x10(void)
{
    char i; /* Variable pour stocker les lettres de l'alphabet */
    char a; /* Variable pour compter les répétitions */

    /* Boucle pour répéter l'affichage de l'alphabet 10 fois */
    for (a = 0; a < 10; a++)
    {
        /* Boucle pour afficher les lettres de 'a' à 'z' */
        for (i = 'a'; i <= 'z'; i++)
        {
            _putchar(i); /* Affiche une lettre */
        }
        _putchar('\n'); /* Ajoute un retour à la ligne après chaque alphabet */
    }
}
