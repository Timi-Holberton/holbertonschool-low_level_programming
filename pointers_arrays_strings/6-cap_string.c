#include "main.h"
#include <stdio.h>

/**
 * cap_string - Met en majuscules la première lettre de chaque mot dans
 * une chaîne de caractères.
 * @tab : tableau de caractères (chaîne de caractères à modifier).
 *
 * Return: Retourne la chaîne de caractères modifiée.
 */
char *cap_string(char *tab)
{
	int i, j;
	char separator[] = " \t\n,;.!?\"(){}"; /* Liste des séparateurs */
	int si_new_mot = 1; /* Indicateur pour le début d'un mot */

	/* Parcours chaque caractère de la chaîne */
	for (i = 0; tab[i] != '\0'; i++)
	{
		/* Si c'est le début d'un mot et que c'est une lettre minuscule */
		if (tab[i] >= 65 && tab[i] <= 90)
		{
			i++; /* Ignore la lettre majuscule dans le cas où c'est déjà un mot */
		}
		/* Si c'est le début d'un mot et que c'est une lettre minuscule */
		else if ((si_new_mot == 1) && ((tab[i] >= 97) && (tab[i] <= 122)))
		{
			tab[i] = tab[i] - 32; /* Convertit en majuscule */
		}
		/* Si ce n'est pas le début du mot et si c'est une majuscule */
		else if ((si_new_mot != 1) && ((tab[i] >= 65 && tab[i] <= 90)))
		{
			tab[i] = tab[i] + 32; /* Convertit en minuscule */
		}

		si_new_mot = 0; /* Indique que nous sommes dans un mot */

		/* Vérifie si le caractère est un séparateur */
		for (j = 0; separator[j] != '\0'; j++)
		{
			if (tab[i] == separator[j])
			{
				si_new_mot = 1; /* Prochain caractère sera le début d'un mot */
				break; /* On sort de la boucle dès qu'un séparateur est trouvé */
			}
		}
	}

	return (tab); /* Retourne le tableau avec les lettres en majuscules */
}

/* Lexique :
   - Tableau: Array, une structure de données qui contient plusieurs valeurs du même type.
   - Séparateur: Separator, un caractère qui marque une séparation entre des mots ou groupes de caractères.
   - Lettre majuscule: Uppercase letter, une lettre qui est en grande taille (A-Z).
   - Lettre minuscule: Lowercase letter, une lettre en petite taille (a-z).
   - Chaîne de caractères: String, une séquence de caractères.

Notions de base :
   - Boucle for: Utilisée pour parcourir chaque caractère de la chaîne.
   - Conditions: Vérification si un caractère est une lettre minuscule ou majuscule.
   - Tableaux: Utilisation d'un tableau pour les séparateurs et pour la chaîne à modifier.
   - Opération ASCII: Transformation de la lettre en majuscule ou minuscule en jouant sur les valeurs ASCII.
*/
