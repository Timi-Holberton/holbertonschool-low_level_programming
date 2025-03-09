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
#include <stdio.h>

/**
 * _strchr - Recherche la 1ère occurrence d'un caractère dans une chaîne.
 * @s: Pointeur vers la chaîne de caractères à parcourir.
 * @c: Caractère à rechercher.
 *
 * Return: un pointeur vers la première occurrence de c dans s,
 *         ou NULL si c n'est pas présent.
 */

char *_strchr(char *s, char c)
{
    int i;  /* Déclaration d'un compteur pour parcourir la chaîne */

    i = 0;  /* Initialisation de l'index à 0 */

    /* Boucle qui parcourt la chaîne tant qu'on n'a pas trouvé le caractère */
    /* recherché et qu'on n'est pas arrivé à la fin de la chaîne ('\0') */
    while (s[i] != c && s[i] != '\0')
    {
        i++;  /* Passage au caractère suivant */
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

/**
 * Lexique :
 * - `char *`: Pointeur vers un caractère, utilisé pour manipuler des chaînes
 *   de caractères.
 * - `&s[i]`: L'opérateur `&` est utilisé pour obtenir l'adresse du caractère
 *   à l'index `i` de la chaîne `s`.
 * - `NULL`: Valeur utilisée pour indiquer qu'un pointeur ne pointe pas vers
 *   une adresse valide.
 *
 * Notions de base :
 * - **Pointeurs** : Un pointeur est une variable qui contient l'adresse
 *   d'une autre variable ou d'un élément dans la mémoire. Dans cette fonction,
 *   `char *s` est un pointeur vers la chaîne de caractères, et `&s[i]` donne
 *   l'adresse du caractère à l'index `i`.
 * - **Boucle `while`** : Une boucle `while` permet de parcourir une chaîne
 *   de caractères jusqu'à ce que la condition soit remplie. Ici, on parcourt
 *   la chaîne jusqu'à trouver le caractère recherché ou la fin de la chaîne.
 * - **Retour d'adresse** : La fonction retourne l'adresse du premier
 *   caractère trouvé ou `NULL` si le caractère n'existe pas dans la chaîne.
 */
