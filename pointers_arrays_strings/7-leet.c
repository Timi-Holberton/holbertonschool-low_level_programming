#include "main.h"
#include <stdio.h>

/**
 * leet - remplacer lettre par chiffre
 * @tab : tableau
 * Return: char
 */

char *leet(char *tab)
{
	int i, j;
	char lettre[] = "aAeEoOtTlL";
	char nombre[] = "4433007711";
/* on lit le tableau*/
	for (i = 0; tab[i] != '\0'; i++)
	{/* on lit le tableau de lettre à remplacer*/
		for (j = 0; lettre[j] != '\0'; j++)
		{/* on compare le tableau de base avec lettre à remplacer*/
			if (tab[i] == lettre[j])
			{/* on fait correspondre tab lettre avec nombre avec la même posit*/
				tab[i] = nombre[j];
			}
		}
	}
	return (tab);
}
