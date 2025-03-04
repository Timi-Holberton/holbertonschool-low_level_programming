#include <stdio.h>
#include "main.h"

/**
 * _strspn : calcule la longueur du préfixe initial de la chaîne 's'
 * qui ne contient que des caractères présents dans la chaîne 'accept'
 * @s : chaine expérimental que l'on compare à accept
 * @accept : chaine témoin
 * Return: retourne le nombre de caractères consécutifs au début de 's'
 * qui appartiennent à 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	int cara;	/* Variable pour parcourir la chaîne 's' */
	int ctere;	/* Variable pour parcourir la chaîne 'accept' */

	/* Parcours de chaque caractère de 's'
	*jusqu'à rencontrer le caractère nul '\0'
	*/
	for (cara = 0; s[cara] != '\0'; cara++)
	{
/* Parcours de 'accept' pour vérifier si
 * le caractère courant de 's' est présent
*/
		for (ctere = 0; accept[ctere] != s[cara]; ctere++)
		{
/*
 * Si on atteint la fin de 'accept' ('\0') sans trouver le caractère de 's',
 * cela signifie que le caractère courant de 's' n'est pas accepté.
 * On retourne alors le nombre de caractères valides comptés jusqu'ici (cara).
 */
			if (accept[ctere] == '\0')
			{
				return (cara);
			}
		}
/*
 * Si on sort de la boucle interne sans retourner,
 * cela veut dire que le caractère de 's' a bien été trouvé dans 'accept'.
 * On passe donc au caractère suivant de 's'.
 */
	}
/*
 * Si on a parcouru toute la chaîne 's' sans rencontrer de caractère non
 * accepté, on retourne la longueur totale de 's'.
 */
	return (0);
}
/** la chaine s recherche dans la chaine accept si elle as des caractères
 * identique a accept et si ce n'est plus le cas elle affiche le nombre
 * de caractère en commun
 *
 * Pour reformuler avec tes mots et un peu plus de précision :
 *
 *La fonction parcourt la chaîne s depuis le début.
 *Pour chaque caractère de s, elle vérifie s'il existe dans la chaîne témoin
 *accept. Tant que chaque caractère de s est trouvé dans accept, on continue.
 *Dès qu'un caractère de s n'existe pas dans accept, on arrête tout et on
 *retourne le nombre total de caractères validés jusque-là.
 *Donc oui, ça compte le nombre de caractères consécutifs communs au début
 *de s avec accept, et ça s'arrête dès qu'il y a un intrus.
*/
