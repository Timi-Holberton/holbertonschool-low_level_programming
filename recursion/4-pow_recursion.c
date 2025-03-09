#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Calcule x à la puissance y de manière récursive.
 * @x : base, le nombre à élever à une puissance.
 * @y : exposant, la puissance à laquelle x doit être élevé.
 *
 * Description : La fonction calcule x^y de manière récursive. Si l'exposant
 * est inférieur à 0, la fonction retourne -1 pour signaler une erreur. Par
 * convention, x^0 est égal à 1, quel que soit x.
 *
 * Return:
 * - La valeur de x élevé à la puissance y.
 * - -1 si y est inférieur à 0 (erreur).
 */
int _pow_recursion(int x, int y)
{
	/**
	 * La fonction calcule la puissance de x élevé à y (x^y) de manière récursive.
	 * - Si y est inférieur à 0, la fonction retourne -1 car la puissance pour
	 *   les exposants négatifs n'est pas gérée ici.
	 * - Si y est égal à 0, le résultat est 1 car tout nombre élevé à la puissance
	 *   0 est égal à 1.
	 * - Sinon, la fonction continue l'appel récursif en réduisant y jusqu'à ce
	 *   qu'il atteigne 0, et multiplie les résultats en cours de retour.
	 *
	 * Exemple :
	 * 2^3 = 2 * 2 * 2 = 8
	 * 3^0 = 1 (par convention)
	 * -2^3 = -2 * -2 * -2 = -8
	 */

	/* Si y est inférieur à 0, retourner -1 pour signaler une erreur */
	if (y < 0)
	{
		return (-1);
	}
	/* Si y est égal à 0, retourner 1 (x^0 = 1) */
	if (y == 0)
	{
		return (1);
	}
	/* Calcul récursif de la puissance x^y */
	return ((x) * _pow_recursion(x, y - 1));
}

/**
 * Lexique des termes techniques :
 * - **Récursion** : Technique où une fonction s'appelle elle-même pour résoudre un problème plus petit
 *   à chaque appel. Ici, la fonction `_pow_recursion` utilise la récursion pour calculer la puissance de x.
 * - **Base** : Le nombre que l'on élève à une certaine puissance (x dans `x^y`).
 * - **Exposant (ou Puissance)** : L'exposant est le nombre y auquel la base x est élevée (x^y).
 * - **Retour** : La commande `return` permet de renvoyer une valeur à l'appelant. Ici, elle renvoie le résultat de
 *   l'exponentiation ou une valeur d'erreur (-1) si l'exposant est négatif.
 *
 * Rappel des notions de base utilisées dans le code :
 * - **Condition (if)** : La structure conditionnelle `if` permet de tester différentes conditions.
 *   Ici, elle sert à gérer les cas où l'exposant est négatif (erreur) ou égal à zéro (résultat de 1).
 * - **Appel récursif** : La fonction `_pow_recursion` s'appelle elle-même avec des valeurs de y réduites,
 *   jusqu'à ce que y atteigne 0, moment où la fonction commence à retourner les résultats de manière ascendante.
 * - **Multiplication** : La multiplication est utilisée dans le calcul de la puissance en multipliant x par
 *   lui-même dans chaque appel récursif.
 */
