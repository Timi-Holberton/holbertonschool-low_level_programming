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
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* si src moins long que n, ajouter des \0 à dest*/
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
<<<<<<< HEAD
}
=======
}
>>>>>>> 0964d6a (2.1)
