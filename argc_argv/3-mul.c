#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Point d'entrée du programme
 * @argc : Nombre d'arguments passés à l'exécution du programme.
 * @argv : Tableau contenant les arguments passés.
 *
 * Description :
 * Ce programme prend en entrée deux arguments (en plus du nom du programme) et
 * calcule leur produit. Si le nombre d'arguments est incorrect, le programme
 * affiche "Error" et termine avec un code de retour 1. Sinon, il convertit les
 * arguments en entiers, les multiplie, et affiche le résultat de la multiplication.
 *
 * Return :
 * - 0 : Si l'exécution est correcte.
 * - 1 : Si le nombre d'arguments est incorrect.
 */
int main(int argc, char *argv[])
{
	int nbre1;    /** Variable pour stocker le 1er nombre */
	int nbre2;    /** Variable pour stocker le 2ème nombre */
	int resultat; /** Variable pour stocker le résultat de la multiplication */

	/** Vérifie qu'il y a exactement 2 arguments en plus du nom du programme */
	if (argc != 3)
	{
		printf("Error\n");
		return (1); /** Retourne 1 si le nombre d'arguments est incorrect */
	}
	else
	{
		/** Convertit le 1er argument en entier */
		nbre1 = atoi(argv[1]);

		/** Convertit le 2ème argument en entier */
		nbre2 = atoi(argv[2]);

		/** Multiplie les deux nombres */
		resultat = nbre1 * nbre2;

		/** Affiche le résultat de la multiplication */
		printf("%d\n", resultat);
	}

	return (0); /** Retourne 0 pour signaler une exécution réussie */
}

/**
 * Lexique des termes techniques :
 * - **argc** : Argument count (compte des arguments). Il représente le nombre
 *   total d'arguments passés au programme, y compris le nom du programme lui-même.
 * - **argv** : Argument vector (vecteur d'arguments). C'est un tableau de chaînes
 *   de caractères qui contient les arguments passés au programme lors de son
 *   exécution. `argv[0]` est toujours le nom du programme, et les autres éléments
 *   contiennent les arguments passés.
 * - **atoi** : La fonction `atoi` (ASCII to integer) est utilisée pour convertir une
 *   chaîne de caractères en un entier.
 * - **printf** : La fonction `printf` permet d'afficher des informations à l'utilisateur.
 * - **if** : L'instruction conditionnelle `if` est utilisée pour tester une condition
 *   et exécuter un bloc de code si cette condition est vraie.
 * - **return** : La fonction `main()` retourne un entier pour indiquer si le programme
 *   s'est terminé correctement (0 pour un succès et 1 pour une erreur).
 *
 * Rappel des notions de base utilisées dans le code :
 * - **Variables et types de données** : `argc` est un entier représentant le nombre
 *   d'arguments. `argv` est un tableau de chaînes de caractères. Les autres variables
 *   sont des entiers utilisés pour effectuer des calculs.
 * - **Condition avec `if`** : Le programme vérifie si le nombre d'arguments est correct
 *   avant de poursuivre l'exécution.
 * - **Conversion avec `atoi`** : Les arguments sont convertis en entiers avant d'effectuer
 *   la multiplication.
 * - **Affichage avec `printf`** : Le résultat de la multiplication est affiché à l'utilisateur.
 * - **Retour de `main()`** : Le programme retourne 0 pour signaler une exécution réussie
 *   ou 1 pour une erreur (si le nombre d'arguments est incorrect).
 */
