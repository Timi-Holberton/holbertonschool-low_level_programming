#include "main.h"

/**
 * _strspn - Retourne la longueur du préfixe de 's'
 * avec seulement des caractères de 'accept'.
 * @s: chaîne à analyser.
 * @accept: caractères autorisés.
 * Return: nombre de caractères valides au début de 's'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	/* Parcourt chaque caractère de 's' */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Vérifie si s[i] est dans 'accept' */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break; /* Trouvé, on passe au suivant */
		}

		/* Si s[i] n'est pas trouvé dans 'accept', on arrête */
		if (accept[j] == '\0')
			break;
	}

	/* Retourne le nombre de caractères valides */
	return (i);
}
