#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2D array of integers to be freed.
 * @height: The height of the array (number of rows).
 *
 * Description: Frees the memory allocated for the 2D array by alloc_grid.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid != NULL && height > 0)
{
for (i = 0; i < height; i++)
{
free(grid[i]);  /* Free each row */
}
free(grid);  /* Free the array of pointers */
}
}
