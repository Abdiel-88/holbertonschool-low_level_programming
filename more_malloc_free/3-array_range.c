#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The first value of the array, included in the range.
 * @max: The last value of the array, included in the range.
 *
 * Description: Creates an array of integers that contains all the values
 * from min to max (inclusive). The values in the array are ordered from
 * min to max. If min is greater than max, or if memory allocation fails,
 * the function returns NULL.
 *
 * Return: A pointer to the newly created array of integers. NULL if min > max
 * or if malloc fails.
 */
int *array_range(int min, int max)
{
int *array;
int i, size;

if (min > max)
{
return (NULL);
}

size = max - min + 1;
array = malloc(sizeof(int) * size);

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = min + i;
}

return (array);
}
