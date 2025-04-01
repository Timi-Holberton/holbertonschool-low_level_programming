#include "lists.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Chaîne dont on veut connaître la taille.
 * Return: Nombre de caractères dans la chaîne.
 */
int _strlen(char *s)
{
	int i = 0;

	/* Parcourt la chaîne caractère par caractère */
	while (s[i] != '\0')
		i++; /* Incrémente le compteur jusqu'à la fin */

	/* Retourne la longueur totale de la chaîne */
	return (i);
}

/**
 * add_node_end - Ajoute un nœud à la fin d'une liste chaînée.
 * @head: Adresse du pointeur vers le premier nœud.
 * @str: Chaîne de caractères à copier dans le nœud.
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* Pointeur pour le nouveau nœud */
	list_t *end; /* Pointeur pour parcourir la liste */

	/* Vérifie si les paramètres sont valides */
	if (head == NULL || str == NULL)
		return (NULL); /* Retourne NULL si head ou str est invalide */

	/* Alloue de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (!new_node) /* Vérifie si malloc a échoué */
		return (NULL);

	/* Duplique la chaîne et l'affecte au nœud */
	new_node->str = strdup(str);
	if (!new_node->str) /* Vérifie si strdup a échoué */
	{
		free(new_node); /* Libère la mémoire du nœud */
		return (NULL);
	}

	/* Remplit les champs du nouveau nœud */
	new_node->len = _strlen(new_node->str); /* Longueur de str */
	new_node->next = NULL; /* Le dernier nœud pointe vers NULL */

	/* Si la liste est vide, on ajoute le nœud en tête */
	if (*head == NULL)
	{
		*head = new_node; /* Le nouveau nœud devient le premier */
		return (new_node);
	}

	/* Trouve le dernier nœud de la liste */
	end = *head; /* Commence au premier nœud */
	while (end->next != NULL) /* Parcourt la liste jusqu'à la fin */
		end = end->next; /* Passe au nœud suivant */

	/* Ajoute le nouveau nœud à la fin de la liste */
	end->next = new_node;

	/* Retourne l'adresse du nouveau nœud */
	return (new_node);
}
