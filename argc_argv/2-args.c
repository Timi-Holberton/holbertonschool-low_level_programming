#include <stdio.h>
#include "main.h"

/**
 * main - Point d'entrée du programme
 * @argc : Nombre d'arguments passés à l'exécution du programme.
 * @argv : Tableau contenant les arguments passés.
 *
 * Description : Ce programme affiche chaque argument passé au programme,
 * un par ligne, y compris le nom du programme lui-même (argv[0]).
 * La boucle `for` parcourt chaque argument de la ligne de commande et
 * l'affiche avec un saut de ligne après chaque argument.
 *
 * Return:
 * - 0 : Si le programme s'exécute correctement.
 */
int main(int argc, char *argv[])
{
	int i;  /** Déclare la variable i pour parcourir les arguments */

	/** Boucle qui parcourt tous les arguments de la ligne de commande */
	for (i = 0; i < argc; i++)
	{
		/** Affiche l'argument actuel suivi d'un saut de ligne */
		printf("%s\n", argv[i]);
	}
	return (0);  /** Retourne 0 pour signaler une exécution réussie */
}

/**
 * Lexique des termes techniques :
 * - **argc** : Argument count (compte des arguments). Il représente le
 *   nombre total d'arguments passés au programme, y compris le nom du programme
 *   lui-même.
 * - **argv** : Argument vector (vecteur d'arguments). C'est un tableau de chaînes
 *   de caractères qui contient les arguments passés au programme lors de son
 *   exécution. `argv[0]` est toujours le nom du programme, et les autres éléments
 *   contiennent les arguments passés.
 * - **printf** : La fonction `printf` est utilisée pour afficher des informations
 *   à l'utilisateur. Ici, elle affiche chaque argument passé au programme.
 * - **for** : La boucle `for` permet de parcourir tous les éléments d'un tableau
 *   ou d'une séquence d'éléments. Elle est utilisée ici pour parcourir `argv[]`
 *   et afficher chaque élément.
 *
 * Rappel des notions de base utilisées dans le code :
 * - **Variables et types de données** : `argc` est un entier (`int`) représentant
 *   le nombre d'arguments. `argv` est un tableau de chaînes de caractères (`char *argv[]`).
 * - **Affichage avec printf** : La fonction `printf` permet d'afficher des informations
 *   à l'utilisateur. Dans ce cas, elle affiche chaque argument passé au programme.
 * - **Boucle for** : La boucle `for` permet d'itérer à travers les éléments du tableau
 *   `argv[]`, ce qui permet de traiter chaque argument un à un.
 * - **Retour d'une fonction (return)** : Le programme retourne 0 pour signaler que
 *   l'exécution s'est bien déroulée. En général, `return 0` dans `main()` indique
 *   que le programme s'est terminé correctement.
 */
