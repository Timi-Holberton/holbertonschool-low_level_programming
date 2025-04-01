#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	size_t stock = 0;

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	while (new_node)
	{
		if (new_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			new_node->str = strdup(str);

			*head = new_node;
			printf("[%d] %s\n", new_node->len, new_node->str);
		}
		new_node = new_node->next = *head;
		stock++;
	}
	return (new_node);
	free (new_node);
}
