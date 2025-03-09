#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i;

    /** Affiche "1" pour le premier nombre */
    printf("1");

    /** Boucle de 2 à 100 pour afficher le FizzBuzz */
    for (i = 2; i <= 100; i++)
    {
        /** Si le nombre est divisible à la fois par 3 et 5 */
        if ((i % 5 == 0) && (i % 3 == 0))
            printf(" FizzBuzz");

        /** Si le nombre est divisible uniquement par 5 */
        else if (i % 5 == 0)
            printf(" Buzz");

        /** Si le nombre est divisible uniquement par 3 */
        else if (i % 3 == 0)
            printf(" Fizz");

        /** Si le nombre n'est divisible ni par 3 ni par 5 */
        else
            printf(" %d", i);
    }
    /** Retourne à la ligne après avoir affiché tous les résultats */
    putchar('\n');

    return (0);
}

/**
 * Lexique :
 * - printf : Permet d'afficher des données sur la sortie standard.
 * - putchar : Fonction utilisée pour afficher un caractère sur la sortie.
 * - if : Structure de contrôle conditionnelle qui permet d'exécuter une
 *   partie du code si une condition est vraie.
 * - else if : Permet de tester des conditions alternatives dans une
 *   structure `if`.
 * - else : Exécute le bloc de code associé lorsque toutes les conditions
 *   précédentes sont fausses.
 * - % : Opérateur modulo, qui calcule le reste de la division entière.

 * Notions de base utilisées :
 * - Boucles `for` : La boucle `for` est utilisée pour répéter un bloc de
 *   code un certain nombre de fois. Elle se compose de trois parties :
 *   l'initialisation, la condition de continuation et l'incrémentation.
 *   Exemple : `for (i = 2; i <= 100; i++)`
 * - Opérateur modulo `%` : Cet opérateur permet de calculer le reste d'une
 *   division. Par exemple, `i % 3` donne le reste de la division de `i` par
 *   3. Si le reste est 0, cela signifie que `i` est divisible par 3.
 */
