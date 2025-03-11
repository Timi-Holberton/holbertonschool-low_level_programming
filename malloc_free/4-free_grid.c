#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid : tableau
 *@height : ligne
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	free(grid[height]);
	free(**grid);
	**grid = NULL;
}
