#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 * Return : nothing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
