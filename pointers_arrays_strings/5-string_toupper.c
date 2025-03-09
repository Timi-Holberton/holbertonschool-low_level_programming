#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Convertit toutes les lettres minuscules en majuscules.
 * @tab : tableau de caractères à traiter.
 *
 * Return: Retourne le tableau modifié avec les majuscules.
 */
char *string_toupper(char *tab)
{
	int i = '0'; /* Initialisation de i à '0', utilisé comme indice */

	/* Tant que i n'est pas égal à '\0', on parcourt la chaîne */
	for (i = 0; tab[i] != '\0'; i++) /* Parcours du tableau */
	{
		/* Si le caractère est une lettre minuscule (a-z), on le convertit */
		if ((tab[i] >= 97) && (tab[i] <= 122)) /* Vérifie si minuscule */
		{
			tab[i] = tab[i] - 32; /* Conversion vers majuscule (ASCII) */
		}
	}
	return (tab); /* Retourne le tableau modifié */
}

/* Lexique :
   - String: chaîne de caractères
   - Uppercase: majuscule
   - Lowercase: minuscule
   - ASCII: code standard pour représenter des caractères
   - Array: tableau
   - Index: indice
*/

/* Notions de base :
   - Pointeurs: Un pointeur est une variable qui contient l'adresse d'une autre variable.
   - Conditions: Les conditions permettent de tester des expressions et d'exécuter un bloc de code si la condition est vraie.
   - Boucle for: Une boucle `for` permet de répéter un bloc de code un nombre déterminé de fois.
   - Tableaux: Un tableau est une collection d'éléments de même type, accessibles par un indice.
*/
