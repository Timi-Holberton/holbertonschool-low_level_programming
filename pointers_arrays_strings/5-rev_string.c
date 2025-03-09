#include <stdio.h>
#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères.
 * @s : tableau de caractères à inverser
 *
 * Return: Aucun retour (void)
 */
void rev_string(char *s)
{
	int i, j;
	int echange;

	/* Trouver la longueur de la chaîne */
	for (j = 0; s[j] != '\0'; j++) /* Parcours de la chaîne */
	{
	}
	j--; /* Positionner j sur le dernier caractère valide */

	/* Inverser les caractères en utilisant un échange */
	for (i = 0; i < j; i++, j--) /* Tant que i est inférieur à j */
	{
		echange = s[i]; /* Sauvegarder le caractère à la position i */
		s[i] = s[j]; /* Placer le caractère à la position j à i */
		s[j] = echange; /* Placer le caractère sauvegardé à la position j */
	}
}

/* Lexique :
   - reverse: inverser
   - string: chaîne
   - character: caractère
   - swap: échanger
   - position: position
*/

/* Notions de base :
   - Pointeurs: Un pointeur est une variable qui contient l'adresse d'une autre variable.
   - Boucle for: Une boucle for permet de répéter un bloc de code un nombre déterminé de fois.
   - Tableaux: Un tableau est une collection de variables de même type, accessibles par un indice.
*/
