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
	void *tab;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	tab = malloc(nmemb * size);
	if (!tab)
	{
		return (NULL);
	}

	return (tab);
}
