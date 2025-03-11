#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Entry point
 *@width : colonne
 *@height : ligne
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **tab;

	if (width <= 0) /* colonne */
	{
		return (0);
	}

	if (height <= 0) /* ligne */
	{
		return (0);
	}
	for (h = 0; h < height; h++)
	{
		tab = malloc(height * sizeof(int *));
	}

	if (!tab)
	{
		return (NULL);
	}

	for (w = 0; w < width; w++)
	{
	tab[h] = malloc(width * sizeof(int *));
	}

	if (!tab)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			tab[h][w] = 0;
		}
	}
	return (tab);
}

