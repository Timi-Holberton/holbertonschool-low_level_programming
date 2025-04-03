#include "lists.h" /* Inclut le fichier d'en-tête de la liste */

/**
 * add_dnodeint - Ajoute un nœud au début d'une liste doublement chaînée.
 * @head:Pointeur vers le premier nœud de la liste.
 * @n:Valeur à stocker dans le nœud.
 *
 * Cette fonction crée un nouveau nœud avec la valeur donnée et l'ajoute
 * au début de la liste doublement chaînée. Elle ajuste les pointeurs
 * pour relier correctement les nœuds.
 *
 * Return:Pointeur vers le nouveau nœud.
 */
dlistint_t *add_dnodeint(dlistint_t **head,const int n)
{
	dlistint_t *nouveau_noeud; /* Déclare un nouveau nœud */

	/* Alloue de la mémoire pour le nouveau nœud */
	nouveau_noeud=malloc(sizeof(dlistint_t));
	/* Vérifie si l'allocation a échoué */
	if(nouveau_noeud==NULL)
		return(NULL); /* Retourne NULL si l'allocation échoue */

	/* Assigne la valeur au nouveau nœud */
	nouveau_noeud->n=n;

	/* Relie le nouveau nœud au début de la liste */
	nouveau_noeud->next=*head;

	/* Le nouveau nœud n'a pas de précédent */
	nouveau_noeud->prev=NULL;

	/* Si la liste n'est pas vide, ajuste le pointeur prev du premier nœud */
	if(*head!=NULL)
		(*head)->prev=nouveau_noeud;

	/* Met à jour le début de la liste */
	*head=nouveau_noeud;

	/* Retourne le nouveau nœud */
	return(nouveau_noeud);
}

/* Lexique des termes techniques:*/
/*malloc:Fonction qui alloue de la mémoire dynamiquement.*/
/*NULL:Valeur indiquant un pointeur invalide ou une absence de valeur.*/
/*Pointeur:Variable qui contient l'adresse d'un élément en mémoire.*/
/*Noeud(node):Élément d'une liste chaînée contenant des données.*/
/*Liste doublement chaînée:Structure de données où chaque nœud pointe*/
/*vers son précédent et son suivant.*/

/* Rappels des notions de base utilisées:*/
/*Pointeurs:Utilisés pour parcourir la liste et manipuler les adresses*/
/*mémoires des nœuds.*/
/*Allocations dynamiques:La fonction malloc permet de réserver de la*/
/*mémoires pendant l'exécution.*/
/*Listes doublement chaînées:Les nœuds sont reliés entre eux via*/
/*deux pointeurs:`next` pour l'élément suivant et `prev` pour l'élément*/
/*précédent.*/
