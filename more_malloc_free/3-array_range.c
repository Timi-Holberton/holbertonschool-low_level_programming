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
		free(tab);
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		tab[i] = i;
	}
return (tab);
}
