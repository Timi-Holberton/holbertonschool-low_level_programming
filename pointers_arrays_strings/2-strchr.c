#include <stdio.h>

/**
 * _strchr - Recherche la 1er occurrence d'un caractère dans 1 chaîne
 * @s: Pointeur vers la chaîne de caractères à parcourir.
 * @c: Caractère à rechercher.
 * Return: un pointeur vers la première occurrence de c dans s,
 * ou NULL si c n'est pas présent.
 */
char *_strchr(char *s, char c)
{
	int i; /* Déclaration d'un compteur pour parcourir la chaîne */

	i = 0; /* Initialisation de l'index à 0 */

	/* Boucle qui parcourt la chaîne tant qu'on n'a pas trouvé le caractère*/
	/*recherché et qu'on n'est pas arrivé à la fin de la chaîne ('\0') */
	while (s[i] != c && s[i] != '\0')
	{
		i++; /* Passage au caractère suivant */
	}

	/* Vérifie si on a trouvé le caractère recherché */
	if (s[i] == c)
	{
		/* Retourne l'adresse du caractère trouvé dans la chaîne */
		return (&s[i]);
	}
	else
	{
		/* Retourne NULL (0) si le caractère n'a pas été trouvé */
		return (0);
	}
}
