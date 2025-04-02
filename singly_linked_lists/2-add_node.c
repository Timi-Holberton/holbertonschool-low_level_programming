#include "lists.h" /* Inclut le fichier d'en-tête de la liste */

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne à mesurer.
 *
 * Cette fonction parcourt la chaîne jusqu'à rencontrer '\0',
 * comptant ainsi le nombre total de caractères.
 *
 * Return: Longueur de la chaîne (nombre de caractères).
 */
int _strlen(char *s)
{
	int i = 0; /* Initialise un compteur à 0 */

	while (s[i] != '\0') /* Tant que le caractère n'est pas '\0' */
	{
		i++; /* Incrémente le compteur */
	}

	return (i); /* Retourne la longueur de la chaîne */
}

/**
 * add_node - Ajoute un nœud au début d'une liste chaînée.
 * @head: Pointeur vers le premier nœud de la liste.
 * @str: Chaîne de caractères à stocker dans le nœud.
 *
 * Cette fonction crée un nouveau nœud, y stocke une copie de
 * la chaîne passée en paramètre, met à jour la longueur de
 * la chaîne et insère le nœud en tête de liste.
 *
 * Return: Pointeur vers le nouveau nœud, ou NULL en cas d'échec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	/* Alloue un nouvel espace mémoire pour le nœud */

	if (!new_node) /* Vérifie si l'allocation a échoué */
	{
		free(new_node); /* Libère la mémoire si échec */
		return (NULL); /* Retourne NULL */
	}

	if (!str) /* Vérifie si la chaîne est NULL */
	{
		free(new_node); /* Libère la mémoire */
		return (NULL); /* Retourne NULL */
	}

	new_node->str = strdup(str); /* Duplique la chaîne */

	if (!new_node->str) /* Vérifie si l'allocation de la chaîne a échoué */
	{
		free(new_node); /* Libère la mémoire */
		return (NULL); /* Retourne NULL */
	}

	new_node->len = _strlen(new_node->str); /* Calcule la longueur */
	new_node->next = *head; /* Pointe vers l'ancien premier nœud */
	*head = new_node; /* Met à jour la tête de la liste */

	return (new_node); /* Retourne le nouveau nœud */
}

/* Lexique des termes techniques :
   - malloc : Fonction qui alloue dynamiquement de la mémoire.
   - strdup : Fonction qui duplique une chaîne en allouant un
	 nouvel espace mémoire.
   - NULL : Indique un pointeur invalide ou une absence de valeur.
   - Pointeur : Variable stockant l'adresse d'un élément en mémoire.
   - Nœud (node) : Élément d'une liste chaînée contenant des données.
   - Liste chaînée : Structure de données où chaque nœud pointe vers
	 le suivant.
*/

/* Rappels des notions de base utilisées :
   - Allocation dynamique : Utilisation de malloc pour réserver
	 de la mémoire à l'exécution.
   - Pointeurs : Permettent de modifier la structure de la liste en
	 accédant directement aux adresses mémoire.
   - Fonction strdup : Crée une copie d'une chaîne en allouant de
	 la mémoire (nécessite de libérer avec free).
   - Gestion des erreurs : Vérification systématique de NULL après
	 chaque allocation de mémoire pour éviter les fuites.
*/
