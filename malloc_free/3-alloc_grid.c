#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2-dimensional array of integers.
 * @width: The width of the array (number of columns).
 * @height: The height of the array (number of rows).
 *
 * Description: Each element of the grid is initialized to 0.
 * If width or height is 0 or negative, the function returns NULL.
 * The function returns a pointer to the 2D array on success, or NULL on fail.
 * Return: A double pointer to the 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i > 0)
{
free(grid[--i]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
