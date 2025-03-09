#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Affiche un triangle de taille donnée
 * @size: Taille du triangle
 *
 * Return: Toujours 0 (Succès)
 */

void print_triangle(int size)
{
    int i, j;

    if (size <= 0)  /* Si la taille est inférieure ou égale à 0 */
        _putchar('\n');
    else
    {
        for (i = 0; i < size; i++)  /* Parcours des lignes du triangle */
        {
            for (j = 0; j < size; j++)  /* Parcours des colonnes */
            {
                if (j < (size - i - 1))  /* Vérifie l'espace restant */
                    _putchar(' ');  /* Affiche un espace */
                else
                {
                    _putchar('#');  /* Affiche le caractère # */
                }
            }
            _putchar('\n');  /* Nouvelle ligne après chaque ligne du triangle */
        }
    }
}

/**
 * Lexique :
 * - `if`: Condition, permet de tester une expression et d'exécuter du
 *   code en fonction du résultat (True ou False).
 * - `else`: Partie conditionnelle alternative à `if`, s'exécute si
 *   la condition `if` est False.
 * - `for`: Boucle qui permet de répéter un bloc de code un nombre
 *   d'itérations.
 * - `_putchar`: Fonction utilisée pour afficher un caractère à l'écran.
 *
 * Notions de base :
 * - Une boucle `for` est utilisée ici pour itérer sur les lignes et les
 *   colonnes du triangle.
 * - Les conditions `if` et `else` permettent de décider si on affiche
 *   un espace ou un caractère '#'.
 * - L'opérateur `<` est utilisé pour vérifier la taille restante et
 *   afficher le bon caractère (espace ou `#`).
 */
