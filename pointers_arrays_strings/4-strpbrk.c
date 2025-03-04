#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - recherche dans une chaîne de caractères la première
 * occurrence d'un caractère parmi une liste de caractères autorisés.
 * @s : chaine recherche
 * @accept : chaine témoin
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;	/* Variables pour parcourir 's' et 'accept' */

	/* Parcourt chaque caractère de 's' jusqu'à la fin de la chaîne */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Vérifie si le caractère courant de 's' existe dans 'accept' */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* Si on trouve une correspondance entre s[i] et accept[j] */
			if (s[i] == accept[j])
				return (&s[i]);
/* Retourne l'adresse de s[i] où la correspondance est trouvée */
		}
	}

	/* Si aucun caractère n'est trouvé dans 'accept', retourne NULL */
	return (0);	/* Aucun caractère de 's' n'est dans 'accept' */
}
