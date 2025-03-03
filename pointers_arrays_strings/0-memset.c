#include <stdio.h>
#include "main.h"

/**
 * _memset - Entry point
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *t; /* nouveau pointeur pour parcourir la mémoire*/
	unsigned int i; /*compteur pour la boucle*/

	t = s; /* pointeur t pointe sur pointeur s*/
/* Boucle pour parcourir les n premiers octets et y mettre la valeur b*/
	for(i = 0; i < n; i++)
	{
		t[i] = b; /* mettre b dans chaque case mémoire*/
	}
	return (s); /* on renvoie le pointeur principale*/
}
