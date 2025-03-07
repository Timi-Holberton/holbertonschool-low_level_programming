#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - calcul avec argument variable inconnu
 * @argc : nombre d'argument, toujours un int
 * @argv : contenu des arguments, toujours un char
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j;

	int addition = 0; /* Initialise la somme totale à 0 */

	if (argc == 1) /* Si aucun argument n'est donné (seulement le programme) */
	{
		printf("0\n");/* Affiche 0 car rien à additionner */
		return (0); /* Retourne 0 Fin du programme */
	}
	for (i = 1; i < argc; i++) /* Parcourt chaque argument donné */
	{/* Initialise j à 0 et parcourt chaque caractère de argv[i] */
/* Continue tant que le caractère n'est pas le '\0' (fin de chaîne) */
/* Incrémente j pour passer au caractère suivant à chaque tour */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* Vérifie si le caractère n'est pas un chiffre entre 0 et 9 */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n"); /* Affiche Error si caractère non valide */
				return (1); /* Quitte le programme avec un code d'erreur */
			}
		}
		/* Ajoute à la somme l'entier converti depuis l'argument */
		addition = addition + atoi(argv[i]);
	}
	printf("%d\n", addition); /* Affiche la somme totale des arguments */
	return (0); /* Retourne 0 Fin du programme */
}
