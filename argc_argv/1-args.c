#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc : nombre d'argument, toujours un int
 * @argv : contenu des arguments, toujours un char
 * Return: Always 0 (Success)
 */

/* Ce programme affiche le nombre d'arguments donnés */
/* (hors nom du programme lui-même) */

int main(int argc, char *argv[])
{
	(void)argv; /* Ignore argv car non utilisé dans ce programme */

	/* Affiche le nombre d'arguments passés, sans compter le programme */
	printf("%d\n", argc - 1);

	return (0); /* Retourne 0 pour indiquer que tout s'est bien passé */
}
