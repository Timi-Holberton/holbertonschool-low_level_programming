#include "lists.h"

/**
 * add_node - insère un noeud
 *@head: Noeud de tête
 *@str: string
 * Return: new_node
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	if (!str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
