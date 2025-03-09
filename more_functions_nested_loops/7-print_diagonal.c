#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Affiche une diagonale de caractères
 * @n: Le nombre de lignes à afficher
 *
 * Return: Toujours 0 (Success)
 */
void print_diagonal(int n)
{
    int i, j;  /* Variables pour les boucles */

    if (n <= 0)  /* Si n est inférieur ou égal à 0, affiche une nouvelle ligne */
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < n; i++)  /* Boucle pour chaque ligne */
        {
            for (j = 0; j < i; j++)  /* Affiche des espaces avant le caractère diagonal */
            {
                _putchar(32);  /* 32 est le code ASCII pour un espace */
            }
            _putchar(92);  /* 92 est le code ASCII pour le caractère '\' (diagonale) */
            _putchar('\n');  /* Retour à la ligne après chaque diagonale */
        }
    }
}

/* Lexique (Glossary) */
/* - diagonal : diagonale */
/* - number : nombre */
/* - lines : lignes */
/* - space : espace (caractère de séparation) */
/* - backslash : barre oblique inverse (caractère '\') */
/* - loop : boucle */
/* - if : si (structure conditionnelle) */
/* - newline : nouvelle ligne (représentée par \n) */

/* Notions de base utilisées dans le code */
/*
- **Boucle for** : Une boucle `for` est utilisée pour répéter un bloc de code un nombre fixe de fois.
   Elle a la structure suivante :
   `for (initialisation; condition; mise à jour)`.
   Dans notre code, on utilise une boucle `for` pour répéter l'affichage de chaque ligne (i) et les espaces avant le caractère diagonal (j).

- **Condition if** : La structure conditionnelle `if` permet d'exécuter un bloc de code uniquement si une condition est vraie.
   Dans le code, `if (n <= 0)` vérifie si le nombre de lignes est valide et, si ce n'est pas le cas, affiche simplement une nouvelle ligne.

- **Caractères ASCII** : En C, chaque caractère est représenté par un code ASCII. Par exemple, `32` est l'ASCII pour un espace, et `92` est pour la barre oblique inverse (`\`).

- **Caractère de retour à la ligne (`\n`)** : Le caractère spécial `\n` est utilisé pour passer à la ligne suivante lors de l'affichage à l'écran.
*/
