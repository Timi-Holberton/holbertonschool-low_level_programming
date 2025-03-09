#include <stdio.h>
#include "main.h"

/**
 * factorial - Calcule le factoriel d'un nombre entier.
 * @n : nombre entier pour lequel le factoriel doit être calculé.
 *
 * Description : La fonction calcule le factoriel de manière récursive.
 * Le factoriel de n, noté n!, est défini comme le produit des entiers de
 * 1 à n. Par convention, 0! = 1. Si n est un nombre négatif, la fonction
 * retourne -1 pour indiquer une erreur.
 *
 * Return:
 * - Le factoriel de n si n est positif ou nul.
 * - -1 si n est négatif (erreur).
 */
int factorial(int n)
{

	/* Si n est égal à 0, retourner 1 (0! = 1 par définition) */
	if (n == 0)
	{
		return (1);
	}

	/* Si n est négatif, retourner -1 pour indiquer une erreur */
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		/* Calcul récursif du factoriel */
		return ((n) * factorial(n - 1));
	}
}

/**
 * Lexique des termes techniques :
 * - **Factoriel** : En mathématiques, le factoriel d'un entier positif n, noté n!,
 *   est le produit de tous les entiers de 1 à n. Par exemple, 5! = 5 * 4 * 3 * 2 * 1 = 120.
 * - **Récursion** : Technique où une fonction s'appelle elle-même pour résoudre un problème plus petit
 *   à chaque appel.
 * - **Retour** : La commande `return` permet de renvoyer une valeur à l'appelant.
 *   Ici, elle renvoie soit le résultat du calcul du factoriel, soit une valeur d'erreur (-1).
 *
 * Rappel des notions de base utilisées dans le code :
 * - **Condition (if)** : La structure conditionnelle `if` permet d'exécuter une action
 *   si une condition est remplie. Ici, elle sert à gérer les cas de base (n=0) et d'erreur (n<0).
 * - **Fonction récursive** : Une fonction qui s'appelle elle-même. Ici, la fonction `factorial`
 *   utilise la récursion pour calculer le factoriel en appelant la fonction avec un argument réduit à chaque fois.
 * - **Appel récursif** : La fonction `factorial` s'appelle elle-même avec `n - 1` pour chaque appel récursif,
 *   jusqu'à ce que la condition de base (n == 0) soit atteinte.
 *
 */
