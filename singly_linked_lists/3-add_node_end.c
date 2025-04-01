#include "lists.h"

/**
 * _strlen - nombre caractère
 *@s: string
 * Return: nbre caractère
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node_end - insère un noeud à la fin
 *@head: Noeud de tête
 *@str: string
 * Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new_node;

	return (new_node);
}
