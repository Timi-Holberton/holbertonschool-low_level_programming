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
 * add_node - insère un noeud
 *@head: Noeud de tête
 *@str: string
 * Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *fin = *head;

	if (!new_node || !str)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	while (fin->next != NULL)
	{
		fin = fin->next;
	}

	new_node->len = _strlen(new_node->str);
	fin->next = new_node;

	return (new_node);
}
