#include "main.h"
#include <stdio.h>

/**
 * cap_string - met en majuscules la 1ère lettre/mots d'une string
 *@tab : tableau
 * Return: char
 */

char *cap_string(char *tab)
{
	int i, j;
	char separator[] = " \t\n,;.!?\"(){}"; /* liste separateur*/
	int si_new_mot = 1; /* nouveau mot */

	for (i = 0; tab[i] != '\0'; i++)
	{ /* Si c'est le début d'un mot et que c'est une lettre minuscule */
		if ((si_new_mot == 1) && ((tab[i] >= 97) && (tab[i] <= 122)))
		{
			tab[i] = tab[i] - 32; /* on passe en MAJ*/
		} /* Si c'est pas le début du mot et si c'est une MAJ */
		else if ((si_new_mot != 1) && ((tab[i] >= 65 && tab[i] <= 90)))
		{
			tab[i] = tab[i] + 32; /* on passe en minuscule*/
		}

		si_new_mot = 0; /*2ème lettre du mot ou plus*/
		/* Vérifie si le caractère est un séparateur*/
		for (j = 0; separator[j] != '\0'; j++)
		{
			if (tab[i] == separator[j])
			{
				si_new_mot = 1; /* prochain caractère sera le début d'un mot*/
				break; /* Pas besoin de vérifier les autres séparateurs */
			}
		}
	}
	return (tab); /* On retourne le tableau avec les maj */
}
