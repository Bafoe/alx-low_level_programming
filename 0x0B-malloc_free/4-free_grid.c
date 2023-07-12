#include <stdlib.h>
#unclude "main.h"
/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 * Return : nothing
 */
void free_grid(int **grid, int height)
{
if (grid == NULL || height <= 0)
return;
for (int i = 0; i < height; i++)
{
if (grid[i] != NULL)
free(grid[i]);
}
free(grid);
}

