#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Entry point
 *@i : colonne width
 *@j : ligne height
 *@k : compteur
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int i, j, k = 0;
	int **tab;

	if ((width <= 0) || (height <= 0))
	{
		return (0);
	}

	tab = malloc(i * sizeof(int*));
	for (i = 0; i < height; i++)
		tab[i] = malloc(width * sizeof(int));

	if (!tab)
	{
		return (NULL);
	}

	if (!tab[i])
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			tab[i][j] = ++k;

	for (i = 0; i < height; i++)
		free(tab[i]);

	free(tab);

	return (tab);
}
