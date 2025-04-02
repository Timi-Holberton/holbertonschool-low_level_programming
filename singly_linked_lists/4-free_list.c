#include "lists.h"

/**
 * free_list - libère la liste chainée
 *@head: liste tête
 * Return: Rien
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
