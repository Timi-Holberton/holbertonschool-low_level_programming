#include "main.h"
#include <stdio.h>

/**
 * leet - check the code for
 * @tab : tableau
 * Return: char
 */

char *leet(char *tab)
{
	int i, j;
	char lettre[] = "aAeEoOtTlL";
	char nombre[] = "4433007711";
/* remplacer lettre par chiffre*/
	for (i = 0; tab[i] != '\0'; i++)
	{
		for (j = 0; lettre[j] != '\0'; j++)
		{
			if (tab[i] == lettre[j])
			{
				tab[i] = nombre[j];
			}
		}
	}
	return (tab);
}
