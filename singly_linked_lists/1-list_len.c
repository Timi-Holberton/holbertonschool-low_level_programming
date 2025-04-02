#include <stdlib.h> /* Inclut stdlib pour la gestion mémoire */
#include <string.h> /* Inclut string pour manipuler les chaînes */
#include <stdio.h>  /* Inclut stdio pour utiliser printf */
#include "lists.h"  /* Inclut le fichier d'en-tête de la liste */

/**
 * list_len - Compte le nombre d'éléments d'une liste chaînée.
 * @h: Pointeur vers le premier nœud de la liste.
 *
 * Cette fonction parcourt la liste chaînée et compte le nombre
 * de nœuds présents. Elle ignore le contenu des chaînes et
 * ne fait qu'incrémenter un compteur à chaque nœud traversé.
 *
 * Return: Nombre total d'éléments dans la liste chaînée.
 */

size_t list_len(const list_t *h)
{
	size_t stock = 0; /* Initialise un compteur à 0 */

	while (h) /* Tant que le pointeur h n'est pas NULL */
	{
		if (h->str == NULL) /* Vérifie si la chaîne du nœud est NULL */
		{
			/* Affiche [0] (nil) si la chaîne est absente */
			printf("[0] (nil)\n");
		}
		h = h->next; /* Passe au nœud suivant */
		stock++; /* Incrémente le compteur de nœuds */
	}
	return (stock); /* Retourne le nombre total de nœuds */
}

/* Lexique des termes techniques :
   - list_t : Structure définissant un nœud de la liste chaînée.
   - NULL : Valeur indiquant l'absence de pointeur valide.
   - Pointeur : Variable contenant l'adresse d'un élément en mémoire.
   - Nœud (node) : Élément d'une liste chaînée contenant des données.
   - Liste chaînée (linked list) : Suite de nœuds reliés par des pointeurs.
*/

/* Rappels des notions de base utilisées :
   - Liste chaînée : Structure où chaque nœud contient des données et
	 un pointeur vers le nœud suivant, permettant une allocation
	 dynamique et flexible.
   - Boucle while : Répète un bloc de code tant qu'une condition est
	 vraie (ici, tant que h n'est pas NULL).
   - Pointeurs : Utilisés pour parcourir la liste en manipulant les
	 adresses mémoire plutôt que les valeurs directement.
*/
