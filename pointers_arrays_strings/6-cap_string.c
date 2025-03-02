#include "main.h"
#include <stdio.h>

/**
 * cap_string - met en majuscules les mots d'une chaîne de caractères
 *@tab : tableau
 * Return: char
 */

char *cap_string(char *tab)
{
	int i;

	for (i = 0; tab[i] != '\0'; i++)
	{
		if ((tab[i] >= 97) && (tab[i] <= 122))
		{
			if (tab[i] != 32)
		 	{
				tab[i] = tab[i] - 32;
			 }
		}
	}

	return (tab);
}
