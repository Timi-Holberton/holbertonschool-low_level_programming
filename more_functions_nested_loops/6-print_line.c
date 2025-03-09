#include <stdio.h>
#include "main.h"

/**
 * print_line - Affiche une ligne de caractères de soulignement
 * @n: Le nombre de caractères à afficher
 *
 * Return: Toujours 0 (Success)
 */
void print_line(int n)
{
    int i;  /* Variable pour l'index de la boucle */

    if (n <= 0)  /* Si n est inférieur ou égal à 0, affiche une nouvelle ligne */
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < n; i++)  /* Affiche un caractère de soulignement pour chaque n */
        {
            _putchar(95);  /* 95 est le code ASCII pour le caractère de soulignement */
        }
        _putchar('\n');  /* Retour à la ligne après l'affichage */
    }
}

/* Lexique (Glossary) */
/* - underscore : caractère de soulignement */
/* - number : nombre */
/* - characters : caractères */
/* - if : si (structure conditionnelle) */
/* - loop : boucle (structure répétitive) */
/* - newline : nouvelle ligne (représentée par \n) */
/* - ASCII code : code ASCII (normalisation des caractères) */
