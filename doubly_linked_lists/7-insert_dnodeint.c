#include "lists.h"
#include <stdlib.h>

/*
insert_dnodeint_at_index insère un nœud dans une liste
	doubl. chaînée à un index donné.
@h:Pointeur vers la tête de la liste
@idx:Index où insérer le nouveau nœud
@n:Valeur du nouveau nœud
Return:Pointeur vers le nouveau nœud ou NULL en cas d'échec
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h,unsigned int idx,int n)
{
	unsigned int i;/* Compteur pour atteindre l'index */
	dlistint_t *nouveau_noeud;/* Nouveau nœud à insérer */
	dlistint_t *noeud_en_cours = *h;/* Pointeur courant */

	/* Vérifie si la liste existe */
	if (h == NULL)
		return (NULL);

	/* Allocation mémoire pour le nouveau nœud */
	nouveau_noeud = malloc(sizeof(dlistint_t));
	if (nouveau_noeud == NULL)
		return (NULL);/* Retourne NULL si échec */
	nouveau_noeud->n = n;/* Stocke la valeur dans le nœud */

	/* Cas où l'insertion est en tête */
	if (idx == 0)
	{
		nouveau_noeud->next = *h;/* Pointe vers l'ancien premier */
		nouveau_noeud->prev = NULL;/* Pas de précédent */
		if (*h != NULL)
			(*h)->prev = nouveau_noeud;/* Met à jour le précédent */
		*h = nouveau_noeud;/* Met à jour la tête */
		return (nouveau_noeud);/* Retourne le nouveau nœud */
	}

	/* Recherche de l'élément précédent l'index */
	for (i = 0; i < idx - 1 && noeud_en_cours != NULL; i++)
		noeud_en_cours = noeud_en_cours->next;

	/* Vérifie si l'index est trop grand */
	if (noeud_en_cours == NULL)
	{
		free(nouveau_noeud);/* Libère la mémoire */
		return (NULL);
	}

	/* Insère le nouveau nœud entre deux éléments */
	nouveau_noeud->prev = noeud_en_cours;/* Le précédent devient courant */
	nouveau_noeud->next = noeud_en_cours->next;/* Le suivant reste inchangé */
	noeud_en_cours->next = nouveau_noeud;/* L'ancien suivant devient le nouveau */

	/* Met à jour le pointeur précédent du nœud suivant */
	if (nouveau_noeud->next != NULL)
		nouveau_noeud->next->prev = nouveau_noeud;

	return (nouveau_noeud);/* Retourne le nouveau nœud */
}

/*
Lexique:
- insert_dnodeint_at_index:Insérer un élément à un index donné
- malloc:Allouer dynamiquement de la mémoire
- free:Libérer la mémoire allouée
- prev:Pointeur vers l'élément précédent
- next:Pointeur vers l'élément suivant
- NULL:Valeur indiquant l'absence d'un pointeur valide
- h:Tête de la liste (premier élément)

Rappel des notions:
- Une liste doublement chaînée est une structure où chaque
	élément (nœud) contient un pointeur vers le suivant
	et un autre vers le précédent.
- malloc est utilisé pour allouer un bloc de mémoire.
- free est utilisé pour libérer un bloc de mémoire inutilisé.
- Un pointeur est une variable stockant l'adresse mémoire
	d'un autre élément.
- L'insertion à un index implique de parcourir la liste
	jusqu'à atteindre l'index souhaité.
*/
