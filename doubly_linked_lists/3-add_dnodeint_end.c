#include "lists.h"

/**
 * add_dnodeint_end - Ajoute un nœud à la fin d'une liste
 * @head:Pointeur vers le premier nœud de la liste
 * @n:Valeur à stocker dans le nouveau nœud
 * Return:Adresse du nouveau nœud, ou NULL en cas d'échec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nouveau_noeud;
	dlistint_t *dernier_noeud;

	/*Allocation mémoire pour un nouveau nœud de type dlistint_t*/
	nouveau_noeud = malloc(sizeof(dlistint_t));
	/*Vérifie si l'allocation mémoire a réussi*/
	if (!nouveau_noeud)
		return (NULL);

	/*Affecte la valeur du nœud*/
	nouveau_noeud->n = n;
	/*Le champ next du dernier nœud doit être NULL*/
	nouveau_noeud->next = NULL;

	/*Si la liste est vide,le nouveau nœud devient le premier*/
	if (*head == NULL)
	{
		/*Le premier nœud n'a pas de précédent,prev=NULL*/
		nouveau_noeud->prev = NULL;
		/*head pointe maintenant sur le nouveau nœud*/
		*head = nouveau_noeud;
		return (nouveau_noeud);
	}

	/*Initialisation de dernier_noeud pour parcourir la liste*/
	dernier_noeud = *head;
	/*Recherche du dernier nœud en avançant jusqu'à next=NULL*/
	while (dernier_noeud->next != NULL)
		dernier_noeud = dernier_noeud->next;

	/*Ajout du nouveau nœud après le dernier nœud actuel*/
	dernier_noeud->next = nouveau_noeud;
	/*Le précédent du nouveau nœud devient l'ancien dernier nœud*/
	nouveau_noeud->prev = dernier_noeud;

	/*Retourne l'adresse du nouveau nœud ajouté à la fin*/
	return (nouveau_noeud);
}

/*Lexique*/
/*dlistint_t:Type de structure pour une liste doublement chaînée*/
/*head:Pointeur vers la tête de la liste*/
/*n:Valeur entière stockée dans le nœud*/
/*malloc:Alloue dynamiquement de la mémoire*/
/*next:Pointeur vers le nœud suivant dans la liste*/
/*prev:Pointeur vers le nœud précédent dans la liste*/
/*NULL:Valeur spéciale indiquant l'absence d'adresse*/
/*return:Instruction pour renvoyer une valeur*/

/*Rappels*/
/*Une liste doublement chaînée est une structure de données*/
/*dans laquelle chaque nœud contient deux pointeurs :*/
/*Un vers le nœud suivant (next)*/
/*Un vers le nœud précédent (prev)*/
/*malloc(sizeof(dlistint_t)) alloue un espace mémoire*/
/*pouvant contenir une structure dlistint_t.*/
/*Le premier nœud d'une liste chaînée a prev=NULL.*/
/*Le dernier nœud d'une liste chaînée a next=NULL.*/
/*head est un pointeur vers le premier nœud de la liste.*/
