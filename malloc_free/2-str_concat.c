#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 *@s1 : tableau
 *@s2 : tableau
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *tab;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	tab = malloc((i + j + 1) * sizeof(char));

	if (!tab)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		tab[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		tab[i + j] = s2[j];
	}
	tab[i + j] = '\0';

	return (tab);
}
