#include <stdio.h>
#include "main.h"

/**
 * _memset - Remplie une zone mémoire avec une valeur donnée
 * @s: Pointeur vers la zone mémoire à remplir
 * @b: Valeur à remplir (byte)
 * @n: Nombre de bytes à remplir
 *
 * Return: Toujours 0 (Succès)
 */

char *_memset(char *s, char b, unsigned int n)
{
    char *t;  /* Nouveau pointeur pour parcourir la mémoire */
    unsigned int i;  /* Compteur pour la boucle */

    t = s;  /* Pointeur t pointe sur le pointeur s */

    /* Boucle pour parcourir les n premiers octets et y mettre b */
    for (i = 0; i < n; i++)
    {
        t[i] = b;  /* Mettre b dans chaque case mémoire */
    }
    return (s);  /* On renvoie le pointeur principal */
}

/**
 * Lexique :
 * - `char *`: Pointeur vers un caractère (type de donnée pointant
 *   vers un emplacement mémoire contenant un caractère).
 * - `unsigned int`: Entier positif, souvent utilisé pour des indices
 *   ou des tailles de mémoire.
 * - `for`: Boucle utilisée pour répéter une action un certain nombre
 *   de fois, ici pour remplir les bytes.
 * - `return`: Utilisé pour renvoyer une valeur ou un pointeur à la
 *   fonction appelante.
 *
 * Notions de base :
 * - Un **pointeur** (`char *`) est une variable qui contient l'adresse
 *   mémoire d'une autre variable (ici une chaîne de caractères).
 * - Une **boucle `for`** permet de répéter un bloc de code un nombre
 *   fixe de fois. Elle est utilisée ici pour itérer à travers les
 *   bytes de la mémoire.
 * - Le **type `unsigned int`** est utilisé pour s'assurer que les
 *   indices ou tailles ne seront jamais négatifs, ce qui est utile
 *   pour les tailles de mémoire ou les itérations de boucle.
 */
