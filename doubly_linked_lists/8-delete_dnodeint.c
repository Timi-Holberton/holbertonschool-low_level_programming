#include "lists.h"
#include <stdio.h> /* Inclusion pour printf */

/**
 * delete_dnodeint_at_index - check the code
 * @head: Pointeur vers la tête de la liste
 * @index: Index où supprimer le nœud
 * Return: 1 si succès, -1 si échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *parcours = *head;
	unsigned int i = 0;

		if (*head == NULL) /* Vérifie si la liste est vide */
	{
		return (-1);
	}

	while (parcours != NULL && i < index)
	{
		parcours = parcours->next;
		i++;
	}

	if (parcours == NULL)
	{
		return (-1);
	}

	if (parcours->prev != NULL)
	{
		parcours->prev->next = parcours->next;
	}
	else
	{
		*head = parcours->next;
	}

	if (parcours->next != NULL)
	{
		parcours->next->prev = parcours->prev;
	}

	free(parcours);

	return (1);
}
