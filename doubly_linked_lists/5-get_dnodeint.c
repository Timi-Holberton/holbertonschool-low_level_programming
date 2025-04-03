#include "lists.h"

/**
 *get_dnodeint_at_index - check the code
 *@head: tête
 *@index: index
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (head);
}
