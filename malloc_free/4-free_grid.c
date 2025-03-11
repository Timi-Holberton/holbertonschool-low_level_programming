#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Libère un tableau 2D alloué dynamiquement.
 * @grid: Pointeur vers le tableau 2D.
 * @height: Nombre de lignes du tableau.
 *
 * Cette fonction libère chaque ligne du tableau,
 * puis libère le tableau principal.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Vérifie si le tableau est NULL pour éviter un segfault */
	if (grid == NULL)
		return;

	/* Libère chaque ligne du tableau */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Libère le tableau principal */
	free(grid);
}
