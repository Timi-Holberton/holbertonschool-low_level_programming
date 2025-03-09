#include <stdio.h>
#include "main.h"

/**
 * _strstr - Recherche la première occurrence d'une sous-chaîne dans une
 * chaîne donnée.
 * @haystack : chaîne principale dans laquelle on cherche la sous-chaîne.
 * @needle : sous-chaîne à rechercher dans 'haystack'.
 *
 * Return: Retourne un pointeur vers la première occurrence de 'needle'
 * dans 'haystack', ou NULL si 'needle' n'est pas trouvé.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j; /* Déclaration de variables pour parcourir 'haystack' et 'needle' */

	/* Parcours chaque caractère de la chaîne 'haystack' */
	for (i = 0; haystack[i] != '\0'; i++) /* Vérifie la chaîne principale */
	{
		/* Vérifie chaque caractère de 'needle' avec la portion de 'haystack' */
		for (j = 0; needle[j] != '\0'; j++)
		{
			/* Si un caractère ne correspond pas, on arrête la comparaison */
			if (haystack[i + j] != needle[j])
			{
				break; /* Arrêt de la comparaison si une différence est trouvée */
			}
		}

		/* Si on a trouvé toute la sous-chaîne, on retourne son adresse */
		if (needle[j] == '\0') /* Si la sous-chaîne est entièrement trouvée */
		{
			return (&haystack[i]); /* Retourne le pointeur vers la sous-chaîne */
		}
	}
	return (0);	/* Retourne NULL si la sous-chaîne n'est pas trouvée */
}

/* Lexique :
   - Haystack: chaîne principale dans laquelle on cherche (origine de la recherche)
   - Needle: sous-chaîne à rechercher
   - Pointer: pointeur, une variable qui stocke l'adresse d'une autre variable
   - Substring: sous-chaîne, une partie d'une chaîne
*/

/* Notions de base :
   - Boucle for: Utilisée ici pour parcourir la chaîne et comparer les caractères.
   - Pointeurs: Un pointeur contient l'adresse mémoire d'une autre variable ou d'un élément (ici, l'adresse de la chaîne trouvée).
   - Comparaison de chaînes: Comparer deux chaînes de caractères pour vérifier si elles sont identiques.
*/
