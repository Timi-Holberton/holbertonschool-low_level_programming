#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: Pointeur vers le dernier nœud de la liste.
 * @n: Valeur à stocker dans le nœud
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;


	if (!current)
	return (NULL);

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	new_node->prev = current;


	return (new_node);
}
