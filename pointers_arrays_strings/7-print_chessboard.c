#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Affiche un échiquier (matrice 2D).
 * @a : tableau pointe sur un autre tableau (matrice 2D de char)
 * Return: Toujours 0 (Succès)
 *
 * Une matrice 2D (matrice bidimensionnelle) est un tableau de tableaux.
 * Dans ce cas, c'est un tableau de 8 éléments où chaque élément est un
 * tableau de 8 caractères représentant les lignes et colonnes d'un échiquier.
 * Les indices de cette matrice sont accessibles comme suit : a[i][j],
 * où 'i' représente l'indice de la ligne et 'j' l'indice de la colonne.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Parcourt chaque ligne de la matrice (échiquier) */
	for (i = 0; i < 8; i++)
	{
		/* Parcourt chaque colonne dans la ligne */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]); /* Affiche l'élément courant de la matrice */
		}
		_putchar('\n'); /* Nouvelle ligne après avoir affiché une ligne entière */
	}
}

/**
 * Lexique :
 * - Matrice (Matrix) : Tableau à deux dimensions, ici utilisé pour
 *   représenter un échiquier avec 8 lignes et 8 colonnes.
 * - Pointeur (Pointer) : Une variable qui contient l'adresse mémoire d'une autre variable.
 * - Tableau (Array) : Une collection d'éléments du même type, accessibles via un indice.
 *
 * Rappel des notions de base :
 * - Boucle for : Permet de répéter un bloc d'instructions un nombre spécifique de fois.
 * - Pointeur de tableau (Array Pointer) : Le pointeur 'a' pointe sur un tableau de 8 éléments,
 *   où chaque élément est un tableau de caractères.
 * - Indices (Indices) : Les indices sont utilisés pour accéder à des éléments d'un tableau ou d'une matrice.
 */
