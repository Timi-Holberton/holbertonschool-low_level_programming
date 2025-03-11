#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *  - Entry point
 *
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	free(grid[height]);
	free(**grid);
	**grid = NULL;
}
