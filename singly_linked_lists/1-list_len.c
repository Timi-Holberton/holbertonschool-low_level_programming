#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - print le nombre d'élément
 * @h: pointeur vers le noeud suivant
 * Return: retourne nbre d'élements
 */

size_t list_len(const list_t *h)
{
	size_t stock = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		stock++;
	}
	return (stock);
}
