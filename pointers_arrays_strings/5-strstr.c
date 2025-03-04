#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack : chaine
 * @needle : sous chaine
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	/* Déclaration de variables pour parcourir 'haystack' et 'needle */

	/* Parcours chaque caractère de la chaîne 'haystack' */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				return (&needle[i]);
			}
		}
	}
	return (0);	/* Retourne NULL si la sous-chaîne n'est pas trouvée */
}
