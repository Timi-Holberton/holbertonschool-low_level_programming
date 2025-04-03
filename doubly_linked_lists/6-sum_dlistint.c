#include "lists.h"

/**
 * sum_dlistint - check the code
 *@head: tête
 * Return: Always EXIT_SUCCESS.
 */

int sum_dlistint(dlistint_t *head)
{
	int somme = 0;

	while (head != NULL)
	{
		somme = somme + head->n;
		head = head->next;
	}
	return (somme);
}
