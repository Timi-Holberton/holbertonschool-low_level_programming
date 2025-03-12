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

	for (min = 0; min <= max; min++)
	{
		tab[min] = min;
	}
return (tab);
}
