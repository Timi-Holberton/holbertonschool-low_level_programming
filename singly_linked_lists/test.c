#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print la liste chainée
 * @h: pointeur vers le noeud suivant
 * Return: stock, nombre de charactère
 */

size_t print_list(const list_t *h)
{
	size_t stock = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		stock++;
	}
	return (stock);
}
