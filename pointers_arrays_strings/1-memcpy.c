#include <stdio.h>
#include "main.h"

/**
 * _memcpy - permet de copier un bloc de mémoire d'un emplacement à un autre
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; /*compteur pour la boucle*/
/* Boucle pour parcourir les n premiers octets + arriver à \0*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest); /* on renvoie le pointeur secondaire*/
}
