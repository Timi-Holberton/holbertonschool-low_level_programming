#include "lists.h" /* Inclut le fichier d'en-tête de la liste */

/**
 * add_dnodeint - Ajoute un nœud au début d'une liste doublement chaînée.
 * @head: Pointeur vers le premier nœud de la liste.
 * @n: Valeur à stocker dans le nœud.
 *
 * Cette fonction crée un nouveau nœud avec la valeur donnée et l'ajoute
 * au début de la liste doublement chaînée. Elle ajuste les pointeurs
 * pour relier correctement les nœuds.
 *
 * Return: Pointeur vers le nouveau nœud.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)); /* Alloue un nœud */

	if (new_node == NULL) /* Vérifie si l'allocation a échoué */
		return (NULL); /* Retourne NULL si l'allocation échoue */

	new_node->n = n; /* Assigne la valeur à stocker dans le nœud */

	new_node->next = *head; /* Relie le nœud au début de la liste */

	new_node->prev = NULL; /* Le nouveau nœud n'a pas de précédent */

	if (*head != NULL) /* Si la liste n'est pas vide */
		(*head)->prev = new_node; /* Relie l'ancien premier nœud au nouveau */

	*head = new_node; /* Met à jour le début de la liste */

	return (new_node); /* Retourne le nouveau nœud */
}

/* Lexique des termes techniques :
malloc : Fonction qui alloue de la mémoire dynamiquement.
NULL : Valeur indiquant un pointeur invalide ou une absence de valeur.
Pointeur : Variable qui contient l'adresse d'un élément en mémoire.
Noeud (node) : Élément d'une liste chaînée contenant des données.
Liste doublement chaînée : Structure de données où chaque nœud pointe
vers son précédent et son suivant.
*/

 /* Rappels des notions de base utilisées :
Pointeurs : Utilisés pour parcourir la liste et manipuler les adresses
mémoire des nœuds.
Allocations dynamiques : La fonction malloc permet de réserver de la
mémoire pendant l'exécution.
Listes doublement chaînées : Les nœuds sont reliés entre eux via
deux pointeurs : `next` pour l'élément suivant et `prev` pour l'élément précédent.
*/
