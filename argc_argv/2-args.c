#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc : nombre d'argument, toujours un int
 * @argv : contenu des arguments, toujours un char
 * Return: Always 0 (Success)
 */

/* Ce programme affiche chaque argument reçu, un par ligne, */
/* y compris le nom du programme (argv[0]) */
int main(int argc, char *argv[])
{

	int i; /* Déclare la variable i pour parcourir les arguments */

	/* Boucle qui parcourt tous les arguments de la ligne de commande */
	for (i = 0; i < argc; i++)
	{
		/* Affiche l'argument actuel suivi d'un saut de ligne */
		printf("%s\n", argv[i]);
	}
	return (0); /* Retourne 0 pour indiquer que tout s'est bien passé */
}
