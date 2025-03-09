#include <stdio.h>
#include "main.h"

/**
 * print_square - Affiche un carré de caractères '#'
 * @size: La taille du carré (longueur d'un côté)
 *
 * Return: Toujours 0 (Success)
 */
void print_square(int size)
{
    int i, j;  /* Variables pour les boucles */

    if (size <= 0)  /* Si size est inférieur ou égal à 0, affiche une
                      nouvelle ligne */
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < size; i++)  /* Boucle pour chaque ligne */
        {
            for (j = 0; j < size; j++)  /* Boucle pour chaque caractère
                                           dans la ligne */
            {
                _putchar('#');  /* Affiche le caractère '#' */
            }
            _putchar('\n');  /* Retour à la ligne après avoir affiché une
                               ligne complète */
        }
    }
}

/* Lexique (Glossary) */
/* - square : carré */
/* - size : taille (dimension) */
/* - character : caractère */
/* - loop : boucle */
/* - line : ligne */
/* - new line : nouvelle ligne (caractère \n) */
/* - '#' : caractère de hachage */

/* Notions de base utilisées dans le code */
/*
- **Boucles for** : Comme expliqué précédemment, les boucles `for`
   permettent de répéter un bloc de code un nombre précis de fois.
   Dans ce cas, la première boucle `for (i = 0; i < size; i++)`
   gère le nombre de lignes à afficher (le côté du carré), et la
   deuxième boucle `for (j = 0; j < size; j++)` gère l'affichage des
   caractères dans chaque ligne.

- **Condition if** : La structure conditionnelle `if` est utilisée pour
   vérifier si la taille est inférieure ou égale à 0. Si c'est le cas,
   une nouvelle ligne vide est affichée.

- **Caractère de retour à la ligne (`\n`)** : Le caractère spécial
   `\n` est utilisé pour indiquer un retour à la ligne à chaque fois
   qu'une ligne de caractères `#` est affichée.

- **Caractère '#'** : Le caractère `#` est utilisé pour dessiner le
   carré. Chaque occurrence de `#` est affichée en fonction de la taille
   du carré spécifiée par `size`.
*/
