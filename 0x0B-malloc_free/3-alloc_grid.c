#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Allocates a 2-dimensional grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
return (NULL);
int **grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (int i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* Free previously allocated memory on failure */
for (int j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
/* Initialize each element to 0 */
for (int j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
