#include <stdlib.h> /* Inclut stdlib pour la gestion mémoire */
#include <string.h> /* Inclut string pour manipuler les chaînes */
#include <stdio.h>  /* Inclut stdio pour utiliser printf */
#include "lists.h"  /* Inclut le fichier d'en-tête de la liste */

/**
 * print_list - Affiche tous les éléments d'une liste chaînée.
 * @h: Pointeur vers le premier nœud de la liste.
 *
 * Cette fonction parcourt la liste chaînée et affiche la
 * longueur de la chaîne et son contenu pour chaque nœud.
 * Si la chaîne est NULL, elle affiche "[0] (nil)".
 *
 * Return: Nombre de nœuds dans la liste.
 */

size_t print_list(const list_t *h)
{
	size_t stock = 0; /* Initialise un compteur pour les nœuds */

	while (h) /* Tant que le pointeur h n'est pas NULL */
	{
		if (h->str == NULL) /* Vérifie si la chaîne du nœud est NULL */
		{
			/* Affiche [0] (nil) si la chaîne est absente */
			printf("[0] (nil)\n");
		}
		else /* Si la chaîne existe */
		{
			/* Affiche la longueur de la chaîne et son contenu */
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next; /* Avance au nœud suivant dans la liste */
		stock++; /* Incrémente le compteur de nœuds */
	}
	return (stock); /* Retourne le nombre total de nœuds */
}

/* Lexique des termes techniques :
   - list_t : Structure définissant un nœud de la liste chaînée.
   - NULL : Valeur indiquant l'absence de pointeur valide.
   - Pointeur : Variable contenant l'adresse d'un élément en mémoire.
   - Nœud (node) : Élément d'une liste chaînée contenant des données.
   - Chaîne (string) : Suite de caractères terminée par '\0'.
   - Taille (length) : Nombre de caractères d'une chaîne.
*/

/* Rappels des notions de base utilisées :
   - Liste chaînée : Structure de données où chaque élément (nœud)
	 contient des données et un pointeur vers le nœud suivant.
   - Boucle while : Répète un bloc de code tant qu'une condition
	 est vraie (ici, tant que h n'est pas NULL).
   - Pointeurs : Utilisés pour parcourir la liste sans copier
	 les données, en manipulant uniquement les adresses mémoire.
*/
