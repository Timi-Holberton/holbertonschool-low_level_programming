#include "lists.h"

/**
 * free_dlistint - Libère la mémoire d'une liste chaînée.
 * @head: Pointeur vers le premier nœud de la liste.
 *
 * Cette fonction parcourt la liste chaînée et libère la mémoire
 * allouée pour chaque nœud, y compris la mémoire allouée pour
 * la chaîne de caractères contenue dans chaque nœud.
 *
 * Return: Rien (void).
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *noeud_a_supprimer;
	dlistint_t *prochain_noeud;

	/*Initialisation du pointeur de parcours*/
	noeud_a_supprimer = head;

	/*Parcourt la liste pour libérer chaque nœud*/
	while (noeud_a_supprimer != NULL)
	{
		/*Stocke l'adresse du nœud suivant avant de libérer*/
		prochain_noeud = noeud_a_supprimer->next;

		/*Libère la mémoire du nœud actuel*/
		free(noeud_a_supprimer);

		/*Passe au nœud suivant*/
		noeud_a_supprimer = prochain_noeud;
	}
}
