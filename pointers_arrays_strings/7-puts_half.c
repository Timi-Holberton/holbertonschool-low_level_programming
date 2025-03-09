#include <stdio.h>
#include "main.h"

/**
 * puts_half - Affiche la seconde moitié d'une chaîne de caractères.
 * @str : Chaîne de caractères.
 * Return: Toujours 0 (Succès)
 *
 * Cette fonction affiche la seconde moitié de la chaîne passée en argument.
 * La "moitié" est calculée en divisant la longueur de la chaîne par 2.
 * Si la longueur de la chaîne est impair, on commence à afficher après le
 * caractère du milieu.
 */
void puts_half(char *str)
{
    int longueur, i, moit;

    /* Calcul de la longueur de la chaîne */
    for (longueur = 0; str[longueur] != '\0'; longueur++)
    {
        /* Calcul de la moitié de la longueur */
        moit = longueur / 2;
    }

    /* Affiche la seconde moitié de la chaîne */
    for (i = (moit + 1); i < longueur; i++)
    {
        if (moit < i) /* Assure que l'affichage commence après la moitié */
        {
            _putchar(str[i]); /* Affiche le caractère à l'index i */
        }
    }
    _putchar('\n'); /* Nouvelle ligne après l'affichage de la moitié */
}

/**
 * Lexique :
 * - Chaîne de caractères (String) : Une séquence de caractères terminée par un caractère nul '\0'.
 * - Longueur (Length) : Le nombre total de caractères dans une chaîne, excluant le caractère '\0'.
 * - Moitié (Half) : La division de la longueur de la chaîne en deux parties égales ou presque égales.
 * - Pointeur (Pointer) : Une variable qui contient l'adresse mémoire d'une autre variable.
 *
 * Rappel des notions de base :
 * - Boucle for (for loop) : Permet de répéter un bloc d'instructions un nombre spécifique de fois.
 * - Caractères (Characters) : Les éléments d'une chaîne sont des caractères individuels stockés en mémoire.
 * - Condition (Condition) : Une instruction qui permet de contrôler le flux d'exécution du programme.
 * - Affichage (Display) : Utilisation de la fonction _putchar pour afficher un caractère à l'écran.
 */
