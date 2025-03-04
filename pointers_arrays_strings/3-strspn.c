#include <stdio.h>
#include "main.h"

/**
 * _strspn - Calcule la longueur du préfixe de 's'
 * qui ne contient que des caractères présents dans 'accept'.
 * @s: chaîne à analyser.
 * @accept: chaîne contenant les caractères autorisés.
 * Return: nombre de caractères consécutifs de 's'
 * présents dans 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;  /* Compteur pour parcourir la chaîne 's' */
	int j; /* Compteur pour parcourir la chaîne 'accept' */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (i);
}
