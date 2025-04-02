#include "lists.h"

/**
 * dlistint_len - affiche le nombre d'élément
 *@h: pointeur vers le noeud suivant
 * Return: stock, nombre de charactère
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t stock = 0;

	while (h)
	{
		h = h->next;
		stock++;
	}
	return (stock);
}
