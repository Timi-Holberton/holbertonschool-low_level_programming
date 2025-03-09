#include <stdio.h>
#include "main.h"

/**
 * main - Point d'entrée principal du programme.
 * @argc : Nombre d'arguments passés à l'exécution du programme.
 * @argv : Tableau de chaînes de caractères contenant les arguments.
 *
 * Description : Ce programme affiche le nombre d'arguments passés à l'exécution,
 * à l'exception du nom du programme lui-même. Il ignore le tableau `argv`
 * dans ce cas précis, car il n'est pas utilisé pour cette tâche.
 *
 * Return:
 * - 0 : Si le programme s'exécute correctement.
 */
int main(int argc, char *argv[])
{
	(void)argv;  /** Ignore argv car il n'est pas utilisé dans ce programme */

	/** Affiche le nombre d'arguments passés, hors le nom du programme */
	printf("%d\n", argc - 1);

	return (0);  /** Retourne 0 pour signaler une exécution réussie */
}

/**
 * Lexique des termes techniques :
 * - **argc** : Argument count (compte des arguments). Il représente le
 *   nombre total d'arguments passés au programme, y compris le nom du programme
 *   lui-même.
 * - **argv** : Argument vector (vecteur d'arguments). C'est un tableau de chaînes
 *   de caractères qui contient les arguments passés au programme lors de son
 *   exécution. Dans ce cas, il est ignoré (le programme ne l'utilise pas).
 * - **printf** : La fonction `printf` est utilisée pour afficher des informations
 *   à l'utilisateur. Ici, elle affiche le nombre d'arguments passés au programme
 *   (hors nom du programme).
 * - **(void)** : Cette instruction permet d'indiquer que la variable `argv` est
 *   intentionnellement ignorée dans ce programme. Cela évite des avertissements de
 *   non-utilisation.
 *
 * Rappel des notions de base utilisées dans le code :
 * - **Variables et types de données** : `argc` est un entier (`int`), représentant
 *   le nombre d'arguments. `argv` est un tableau de chaînes de caractères, mais
 *   il n'est pas utilisé dans ce programme.
 * - **Affichage avec printf** : La fonction `printf` permet d'afficher des informations
 *   à l'utilisateur. Dans ce cas, elle affiche le nombre d'arguments passés au programme
 *   (sans compter le programme lui-même).
 * - **Instruction (void)** : L'instruction `(void)argv` sert à indiquer que le tableau
 *   `argv` est volontairement non utilisé dans ce programme. Cela peut être utile pour
 *   éviter les avertissements du compilateur sur des variables inutilisées.
 */

