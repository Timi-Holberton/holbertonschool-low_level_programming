#include "lists.h" /* Inclut le fichier d'en-tête de la liste */

/**
 * print_dlistint - Affiche les éléments d'une liste doublement chaînée.
 * @h: Pointeur vers le premier nœud de la liste.
 *
 * Cette fonction parcourt une liste doublement chaînée et affiche
 * les valeurs contenues dans chaque nœud.
 *
 * Return: Le nombre d'éléments affichés.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t stock = 0; /* Initialise un compteur d'éléments */

	while (h) /* Tant qu'il reste des nœuds à parcourir */
	{
		printf("%d\n", h->n); /* Affiche la valeur du nœud courant */

		h = h->next; /* Passe au nœud suivant */
		stock++; /* Incrémente le compteur */
	}
	return (stock); /* Retourne le nombre de nœuds parcourus */
}

/* Lexique des termes techniques :
print : Fonction qui affiche une sortie à l'écran (ici, un entier).
NULL : Valeur indiquant un pointeur invalide ou une absence de valeur.
Pointeur : Variable qui contient l'adresse d'un élément en mémoire.
Nœud (node) : Élément d'une liste chaînée contenant des données.
Liste doublement chaînée : Structure de données où chaque nœud pointe
vers son précédent et son suivant.
*/

/* Rappels des notions de base utilisées :
Pointeurs : Utilisés pour parcourir la liste et manipuler les adresses
mémoire des nœuds.
Boucle while : Répète le bloc de code tant que la condition (ici,
h != NULL) est vraie.
Fonction printf : Affiche la valeur donnée à l'écran.
*/
