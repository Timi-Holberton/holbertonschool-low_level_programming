#include <stdio.h>
#include "main.h"

/**
 *  - Entry point
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j; /* Déclaration d'un compteur pour parcourir la chaîne */
	 /* Initialisation de l'index à 0 */
	for (j = 0; needle[j] != '\0'; j++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			return (haystack[i]);
		}
	{
	return (needle[i]);
}
