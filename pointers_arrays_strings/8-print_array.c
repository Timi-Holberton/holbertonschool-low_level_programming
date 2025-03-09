#include <stdio.h>
#include "main.h"

/**
 * print_array - Affiche les éléments d'un tableau d'entiers.
 * @a : Tableau d'entiers à afficher.
 * @n : Nombre d'éléments à afficher dans le tableau.
 * Return: Toujours 0 (Succès)
 *
 * Cette fonction parcourt le tableau d'entiers 'a' et affiche chaque élément.
 * Les éléments sont séparés par une virgule, sauf le dernier.
 */
void print_array(int *a, int n)
{
    int i;

    /* Parcourt chaque élément du tableau */
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            /* Affiche le premier élément sans virgule */
            printf("%d", a[i]);
        }
        else
        {
            /* Affiche les éléments suivants avec une virgule */
            printf(", %d", a[i]);
        }
    }
    printf("\n"); /* Nouvelle ligne après l'affichage */
}

/**
 * Lexique :
 * - Tableau (Array) : Une structure de données qui contient une collection d'éléments de même type, accessibles via un index.
 * - Entier (Integer) : Un type de donnée qui représente des nombres entiers, sans décimale.
 * - Pointeur (Pointer) : Une variable qui contient l'adresse mémoire d'une autre variable.
 * - Affichage (Display) : Utilisation de printf pour afficher des données à l'écran.
 *
 * Rappel des notions de base :
 * - Boucle for (for loop) : Permet de répéter un bloc d'instructions un nombre spécifique de fois.
 * - Condition (Condition) : Une instruction qui permet de contrôler le flux d'exécution du programme.
 * - Tableau d'entiers (Integer Array) : Un tableau qui contient uniquement des nombres entiers.
 */
