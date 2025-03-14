#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 *@min : minimum
 *@max : maximum
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int i;
	int *tab;

	if (min > max)
	{
		return (NULL);
	}

	tab = malloc((max - min + 1) * sizeof(int));

	if (!tab)
	{
		return (NULL);
	}

	for (i = 0; i <= (max - min + 1); i++)
	{
		tab[i] = min + i;
	}
	return (tab);
}
