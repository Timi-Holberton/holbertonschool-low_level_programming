#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc : nombre d'argument, toujours un int
 * @argv : contenu des arguments, toujours un char
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int nbre1; /* Variable pour stocker le 1er nombre */
	int nbre2; /* Variable pour stocker le 2ème nombre */
	int resultat; /* Variable pour stocker le résultat */

	if (argc != 3)
	{	/* Vérifie qu'il y a exactement 2 arguments en + du nom */
		printf("Error\n");
		return (1);
		/* Retourne 1 si le nombre d'arguments est incorrect */
	}
	else if (argc > 0)
	{
		/* Convertit le 1er argument en entier */
		nbre1 = atoi(argv[1]);
		/* Convertit le 2ème argument en entier */
		nbre2 = atoi(argv[2]);
		/* Multiplie les deux nombres */
		resultat = nbre1 * nbre2;

		/* Affiche le résultat de la multiplication */
		printf("%d\n", resultat);
	}
	return (0); /* Fin normale du programme */
}
