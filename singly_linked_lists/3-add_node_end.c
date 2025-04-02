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
 * add_node_end - Ajoute un noeud à la fin d'une liste chaînée.
 * @head: Adresse du pointeur vers le premier noeud.
 * @str: Chaîne de caractères à copier dans le noeud.
 * Return: Adresse du nouveau noeud, ou NULL en cas d'échec.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nouveau_noeud; /* Pointeur pour le nouveau noeud */
	list_t *noeud_en_cours; /* Pointeur pour parcourir la liste */

	/* Vérifie si les paramètres sont valides */
	if (head == NULL || str == NULL)
		return (NULL); /* Retourne NULL si head ou str est invalide */

	/* Alloue de la mémoire pour le nouveau noeud */
	nouveau_noeud = malloc(sizeof(list_t));
	if (!nouveau_noeud) /* Vérifie si malloc a échoué */
		return (NULL);

	/* Duplique la chaîne et l'affecte au noeud */
	nouveau_noeud->str = strdup(str);
	if (!nouveau_noeud->str) /* Vérifie si strdup a échoué */
	{
		free(nouveau_noeud); /* Libère la mémoire du noeud */
		return (NULL);
	}

	/* Remplit les champs du nouveau noeud */
	nouveau_noeud->len = _strlen(nouveau_noeud->str); /* Longueur de str */
	nouveau_noeud->next = NULL; /* Le dernier noeud pointe vers NULL */

	/* Si la liste est vide, on ajoute le noeud en tête */
	if (*head == NULL)
	{
		*head = nouveau_noeud; /* Le nouveau noeud devient le premier */
		return (nouveau_noeud);
	}

	/* Trouve le dernier noeud de la liste */
	noeud_en_cours = *head; /* Commence au premier noeud */
	while (noeud_en_cours->next != NULL) /* Parcourt la liste jusqu'à la fin */
		noeud_en_cours = noeud_en_cours->next; /* Passe au noeud suivant */

	/* Ajoute le nouveau noeud à la fin de la liste */
	noeud_en_cours->next = nouveau_noeud;

	/* Retourne l'adresse du nouveau noeud */
	return (nouveau_noeud);
}
