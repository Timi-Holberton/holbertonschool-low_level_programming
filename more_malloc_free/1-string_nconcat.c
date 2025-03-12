#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 *@s1 : chaine
 *@s2 : chaine
 *@n : nombre
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, long1, long2;
	char *tab;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (long1 = 0; s1[long1] != '\0'; long1++)
		;
	for (long2 = 0; s2[long2] != '\0'; long2++)
		;

	if (n >= long2)
		long2 = n;

	tab = malloc((long1 + long2 + 1) * sizeof(char));
	if (!tab)
	{
		return (NULL);
	}

	for (i = 0; i < long1; i++)
		tab[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		tab[i + j] = s2[j];

	return (tab);
}
