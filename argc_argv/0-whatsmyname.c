#include <stdio.h>
#include "main.h"

/**
 * main - Point d'entrée principal du programme.
 * @argc : Nombre d'arguments passés à l'exécution du programme.
 * @argv : Tableau de chaînes de caractères contenant les arguments.
 *
 * Description : La fonction `main` est le point d'entrée du programme. Elle prend
 * deux paramètres : `argc` (le nombre d'arguments passés) et `argv` (le tableau
 * de chaînes de caractères qui contient ces arguments). Elle parcourt le tableau
 * d'arguments et les affiche un par un.
 *
 * Return:
 * - 0 : Si le programme s'exécute correctement.
 */
int main(int argc, char *argv[])
{
	int i;  /** Variable d'indexation */

	/**
	 * Parcours du tableau d'arguments et affichage de chacun d'entre eux
	 * sur une nouvelle ligne.
	 */
	for (i = 0; i < argc; i++)
	{
		/** Affiche chaque argument sur une ligne différente */
		printf("%s\n", argv[i]);
	}
	return (0);  /** Retour de 0 pour signaler une exécution réussie */
}

/**
 * Lexique des termes techniques :
 * - **argc** : Argument count (compte des arguments). Il représente le
 *   nombre total d'arguments passés au programme, y compris le nom du programme
 *   lui-même.
 * - **argv** : Argument vector (vecteur d'arguments). C'est un tableau de chaînes
 *   de caractères qui contient les arguments passés au programme lors de son
 *   exécution.
 * - **Tableau** : Un tableau est une structure de données permettant de stocker
 *   plusieurs éléments du même type. Ici, `argv` est un tableau de chaînes
 *   de caractères.
 * - **printf** : La fonction `printf` est utilisée pour afficher des informations
 *   à l'utilisateur, ici pour afficher les arguments passés au programme.
 *
 * Rappel des notions de base utilisées dans le code :
 * - **Boucle for** : La boucle `for` est utilisée pour parcourir un tableau ou
 *   effectuer une action un nombre déterminé de fois. Ici, elle est utilisée pour
 *   parcourir tous les arguments passés au programme.
 * - **Variables et types de données** : `argc` est de type `int`, tandis que
 *   `argv` est un tableau de chaînes de caractères, chaque chaîne représentant
 *   un argument passé au programme.
 * - **Affichage avec printf** : La fonction `printf` permet d'afficher des
 *   informations à l'utilisateur. Elle est utilisée ici pour afficher chaque
 *   argument dans une nouvelle ligne.
 */
