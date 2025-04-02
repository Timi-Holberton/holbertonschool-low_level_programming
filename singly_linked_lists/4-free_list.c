#include "lists.h" /* Inclut le fichier d'en-tête de la liste */

/**
 * free_list - Libère la mémoire d'une liste chaînée.
 * @head: Pointeur vers le premier nœud de la liste.
 *
 * Cette fonction parcourt la liste chaînée et libère la mémoire
 * allouée pour chaque nœud, y compris la mémoire allouée pour
 * la chaîne de caractères contenue dans chaque nœud.
 *
 * Return: Rien (void).
 */

void free_list(list_t *head)
{
	list_t *current; /* Déclare un pointeur pour le nœud courant */

	while (head != NULL) /* Tant que la liste n'est pas vide */
	{
		current = head; /* Sauvegarde le nœud actuel */
		head = head->next; /* Avance au nœud suivant */
		free(current->str); /* Libère la chaîne de caractères du nœud */
		free(current); /* Libère la mémoire du nœud lui-même */
	}
}

/* Lexique des termes techniques :
   free : Fonction qui libère un bloc de mémoire alloué dynamiquement.
   NULL : Valeur indiquant un pointeur invalide ou une absence de valeur.
   Pointeur : Variable qui contient l'adresse d'un élément en mémoire.
   Nœud (node) : Élément d'une liste chaînée contenant des données.
   Liste chaînée : Structure de données où chaque nœud pointe vers
   le suivant.
   Libération de mémoire : Processus de désallocation de la mémoire
   utilisée pour éviter les fuites de mémoire.
*/

/* Rappels des notions de base utilisées :
   Pointeurs : Utilisés pour parcourir la liste et manipuler les adresses
   mémoire des nœuds.
   Boucle while : Répète le bloc de code tant que la condition (ici,
   head != NULL) est vraie.
   Fonction free : Permet de libérer la mémoire allouée dynamiquement,
   pour éviter des fuites de mémoire.
*/
