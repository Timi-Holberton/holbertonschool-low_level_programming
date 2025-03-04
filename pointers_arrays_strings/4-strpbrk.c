#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s : chaine recherche
 * @accept : chaine témoin
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;	/* Variable pour parcourir la chaîne 's' */
	int j;	/* Variable pour parcourir la chaîne 'accept' */

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
	return (s++);
}
