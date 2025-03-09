#include <stdio.h>
#include "main.h"

/**
 * carrede - Trouve la racine carrée d'un nombre de manière récursive.
 * @n : nombre dont on cherche la racine carrée.
 * @nbre : valeur à tester pour savoir si elle est la racine carrée de n.
 *
 * Description : Cette fonction utilise la récursion pour tester chaque
 * nombre à partir de 1 jusqu'à ce qu'il trouve le nombre dont le carré est égal à n.
 * Si le carré d'un nombre (nbre * nbre) est égal à n, la fonction retourne ce nombre.
 * Si le carré dépasse n, cela signifie que n n'a pas de racine carrée entière et
 * la fonction retourne -1.
 *
 * Return:
 * - Si la racine carrée est trouvée, le nombre est retourné.
 * - -1 si n n'a pas de racine carrée entière.
 */
int carrede(int n, int nbre)
{
	/**
	 * Cette fonction cherche la racine carrée de n en testant chaque nombre.
	 * - Si le carré de nbre est égal à n, la racine carrée est trouvée et on
	 *   retourne nbre.
	 * - Si le carré de nbre est supérieur à n, on retourne -1 pour indiquer
	 *   qu'il n'existe pas de racine carrée entière.
	 * - La fonction continue à s'appeler récursivement en incrémentant nbre
	 *   jusqu'à trouver la racine ou dépasser n.
	 *
	 * Exemple : Si n = 16, nbre sera testé successivement jusqu'à ce que
	 * nbre * nbre == 16.
	 */
	if (nbre * nbre == n)
	{
		return (nbre);  /* La racine carrée est trouvée */
	}
	else if (nbre * nbre > n)
	{
		return (-1);  /* n n'a pas de racine carrée entière */
	}
	/* Appel récursif pour tester le suivant */
	return (carrede(n, nbre + 1));
}

/**
 * _sqrt_recursion - Calcule la racine carrée d'un nombre n de manière récursive.
 * @n : le nombre dont on veut la racine carrée.
 *
 * Description : Cette fonction vérifie d'abord si n est négatif (ce qui
 * rend la racine carrée impossible dans le domaine des réels), puis elle
 * appelle la fonction `carrede` pour trouver la racine carrée entière de n.
 *
 * Return:
 * - La racine carrée de n si elle existe.
 * - -1 si n est négatif ou si n n'a pas de racine carrée entière.
 */
int _sqrt_recursion(int n)
{
	/**
	 * Cette fonction commence par vérifier si n est un nombre négatif.
	 * - Si n est inférieur à 0, elle retourne -1 pour signaler que la racine carrée
	 *   dans l'ensemble des réels n'est pas définie.
	 * - Sinon, elle appelle `carrede` pour trouver la racine carrée entière de n.
	 *
	 * Exemple : Si n = 16, _sqrt_recursion appellera carrede pour trouver
	 * la racine carrée (4).
	 */
	if (n < 0)
	{
		return (-1);  /* Racine carrée d'un nombre négatif n'est pas définie */
	}
	return (carrede(n, 1));  /* Appel à la fonction carrede pour trouver la racine */
}

/**
 * Lexique des termes techniques :
 * - **Racine carrée** : La racine carrée d'un nombre x est un nombre y tel que
 *   y * y = x. La racine carrée de x est notée √x.
 * - **Récursion** : Technique où une fonction s'appelle elle-même pour résoudre
 *   un problème plus petit. Ici, la récursion est utilisée pour tester chaque
 *   nombre à partir de 1 pour trouver la racine carrée.
 * - **Retour** : La commande `return` est utilisée pour renvoyer un résultat.
 *   Dans ce cas, elle renvoie la racine carrée si trouvée, ou -1 si aucune racine
 *   carrée entière n'existe.
 *
 * Rappel des notions de base utilisées dans le code :
 * - **Condition (if)** : La structure conditionnelle `if` permet de tester des
 *   conditions. Elle est utilisée ici pour vérifier si le carré d'un nombre est égal
 *   à n (racine carrée trouvée) ou si le carré dépasse n (pas de racine carrée entière).
 * - **Appel récursif** : La fonction `carrede` s'appelle elle-même avec un nombre
 *   incrémenté, jusqu'à ce que la racine carrée soit trouvée ou que la valeur
 *   dépasse n.
 * - **Multiplication** : La multiplication est utilisée pour tester si le carré
 *   de nbre est égal à n (nbre * nbre == n).
 */

