#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Effectue une addition avec des arguments passés en ligne de commande.
 * @argc : Nombre d'arguments passés au programme.
 * @argv : Tableau contenant les arguments passés.
 *
 * Description :
 * Ce programme prend des nombres en arguments, les additionne, et affiche
 * le résultat. Si un argument n'est pas un nombre valide, le programme affiche
 * "Error" et termine avec un code d'erreur 1. Si aucun argument n'est donné
 * (autre que le nom du programme), le programme affiche "0".
 *
 * Return :
 * - 0 : Si l'exécution est correcte.
 * - 1 : Si un argument non valide est trouvé.
 */
int main(int argc, char *argv[])
{
	int i, j; /* Variables pour parcourir les arguments et les caractères */
	int addition = 0; /** Initialise la somme totale à 0 */

	/** Si aucun argument n'est donné, seulement le nom du programme */
	if (argc == 1)
	{
		printf("0\n"); /** Affiche 0 car rien à additionner */
		return (0); /** Retourne 0, fin du programme */
	}

	/** Parcourt chaque argument donné */
	for (i = 1; i < argc; i++)
	{
		/** Parcourt chaque caractère de l'argument actuel */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/** Vérifie si le caractère n'est pas un chiffre valide */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n"); /** Affiche "Error" en cas d'argument invalide */
				return (1); /** Quitte le programme avec un code d'erreur */
			}
		}
		/** Ajoute à la somme l'entier converti depuis l'argument */
		addition = addition + atoi(argv[i]);
	}

	/** Affiche la somme totale des arguments */
	printf("%d\n", addition);
	return (0); /** Retourne 0, fin du programme */
}

/**
 * Lexique des termes techniques :
 * - **argc** : Argument count (compte des arguments). Il représente le nombre
 *   total d'arguments passés au programme, y compris le nom du programme lui-même.
 * - **argv** : Argument vector (vecteur d'arguments). C'est un tableau de chaînes
 *   de caractères qui contient les arguments passés au programme lors de son
 *   exécution. `argv[0]` est toujours le nom du programme, et les autres éléments
 *   contiennent les arguments passés.
 * - **atoi** : La fonction `atoi` (ASCII to integer) permet de convertir une chaîne
 *   de caractères en un entier. Si la chaîne ne peut pas être convertie en nombre,
 *   elle retourne 0.
 * - **isdigit** : La fonction `isdigit` est utilisée pour vérifier si un caractère
 *   donné est un chiffre (0-9). Si c'est un chiffre, la fonction retourne vrai.
 * - **printf** : La fonction `printf` permet d'afficher des informations à l'utilisateur.
 * - **return** : La fonction `main()` retourne un entier pour indiquer si le programme
 *   s'est terminé correctement (0 pour un succès et 1 pour une erreur).
 *
 * Rappel des notions de base utilisées dans le code :
 * - **Variables et types de données** : Le programme utilise des variables de type entier
 *   pour manipuler les arguments et les résultats.
 * - **Conversion de chaînes avec `atoi`** : La fonction `atoi` est utilisée pour convertir
 *   les arguments passés en ligne de commande en nombres.
 * - **Contrôle des erreurs avec `isdigit`** : La fonction `isdigit` permet de vérifier si
 *   un caractère est un chiffre, et assure qu'aucun argument non valide n'est pris en compte.
 * - **Addition avec des entiers** : Les arguments sont convertis en entiers et additionnés
 *   pour produire un total.
 * - **Affichage avec `printf`** : Cette fonction est utilisée pour afficher le résultat à l'utilisateur.
 * - **Retour de `main()`** : Le programme retourne 0 pour signaler une exécution réussie
 *   ou 1 pour une erreur (si des arguments invalides sont détectés).
 */
