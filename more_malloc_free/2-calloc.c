#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 *@nmemb : nombre élément
 *@size : taille
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *tab;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	tab = malloc(nmemb * size);
	if (!tab)
	{
		return (NULL);
	}

	for (i = 0; tab[i] < (nmemb * size); i++)
	{
		tab[i] = 0;
	}

	return (tab);
}
