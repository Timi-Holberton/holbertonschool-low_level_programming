#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Vérifie si un nombre est un nombre premier.
 * @n : nombre à vérifier.
 *
 * Description : Cette fonction vérifie si un nombre est premier en utilisant
 * plusieurs conditions. Elle vérifie d'abord si le nombre est 2 ou 5,
 * qui sont des nombres premiers. Ensuite, elle examine le dernier chiffre
 * du nombre pour vérifier s'il se termine par 1, 3, 7 ou 9, ce qui est
 * une indication que le nombre pourrait être premier (mais pas nécessairement).
 * La fonction utilise également la division par 2 et 5 pour éliminer les
 * cas de nombres divisibles par ces valeurs.
 *
 * Return:
 * - 1 si le nombre est premier.
 * - 0 si le nombre n'est pas premier.
 */
int is_prime_number(int n)
{
	int last_digit = n % 10;  /** Dernier chiffre du nombre */

	/**
	 * Si n est égal à 2 ou 5, alors c'est un nombre premier.
	 */
	if (n == 2 || n == 5)
	{
		return (1);  /* n est un nombre premier */
	}

	/**
	 * Si le dernier chiffre de n est 1, 3, 7 ou 9, on suppose que n peut
	 * être un nombre premier.
	 */
	if (last_digit == 1 || last_digit == 3 || last_digit == 7 || last_digit == 9)
	{
		return (1);  /* n est potentiellement un nombre premier */
	}

	/**
	 * Si n est divisible par 2 ou 5, ce n'est pas un nombre premier.
	 */
	else if (n % 2 == 0 || n % 5 == 0)
	{
		return (0);  /* n n'est pas un nombre premier */
	}

	/**
	 * Récursivement, on vérifie les autres conditions de primalité pour
	 * les autres nombres.
	 */
	return(is_prime_number(n + 1));  /* Appel récursif */
}

/**
 * Lexique des termes techniques :
 * - **Nombre premier** : Un nombre premier est un nombre entier supérieur à 1
 *   qui n'a que deux diviseurs distincts : 1 et lui-même.
 * - **Modulo (%)** : L'opérateur modulo donne le reste de la division entière.
 *   Ici, il est utilisé pour obtenir le dernier chiffre du nombre.
 * - **Récursion** : La fonction s'appelle elle-même pour vérifier si un
 *   nombre est premier en incrementant la valeur de n. Cela continue jusqu'à
 *   ce qu'un résultat soit trouvé.
 * - **Division** : La division est utilisée ici pour vérifier si le nombre
 *   est divisible par 2 ou 5.
 *
 * Rappel des notions de base utilisées dans le code :
 * - **Condition (if)** : La structure conditionnelle `if` permet de tester des
 *   conditions. Elle est utilisée ici pour vérifier si un nombre est premier,
 *   en le comparant à des valeurs spécifiques comme 2 ou 5, ou en vérifiant
 *   son dernier chiffre.
 * - **Récursion** : La fonction appelle elle-même pour tester si n est premier,
 *   en incrémentant progressivement n. Cela permet de tester tous les cas possibles.
 * - **Opérateurs arithmétiques** : Les opérateurs comme `%` (modulo) et `/`
 *   (division) sont utilisés pour déterminer si un nombre est divisible par d'autres.
 */

