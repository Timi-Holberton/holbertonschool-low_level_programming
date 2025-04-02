#include "lists.h"

/**
 * print_dlistint - check the code
 *@h: pointeur vers le noeud suivant
 * Return: stock, nombre de charactère
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t stock = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		stock++;
	}
	return (stock);
}
