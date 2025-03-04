#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Entry point
 * @dest : destination
 * @src: source
 * @n : nombre et emplacement
 * Return: Always 0 (Success)
 */

 char *_strncpy(char *dest, char *src, int n)
 /* Déclare la fonction qui copie jusqu'à n caractères de src vers dest */
 {
	 int i; /* Déclare un compteur pour parcourir les chaînes */

	 /* Boucle pour copier chaque caractère de src dans dest */
	 for (i = 0; i < n && src[i] != '\0'; i++)
	 /* Tant que i < n et qu'on n'a pas atteint la fin de src */
	 {
		 dest[i] = src[i]; /* Copie le caractère de src dans dest */
	 }

	 /* Si src est plus court que n, on complète dest avec '\0' */
	 for (; i < n; i++)
	 /* Continue jusqu'à n en ajoutant des '\0' */
	 {
		 dest[i] = '\0'; /* Ajoute un caractère nul dans dest */
	 }

	 return (dest); /* Retourne le pointeur vers la chaîne dest */
 }
