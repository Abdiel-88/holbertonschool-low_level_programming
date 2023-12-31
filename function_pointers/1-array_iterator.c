#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: A pointer to the first element of the array of integers.
 * @size: The size of the array.
 * @action: A pointer to the function to be used on each element of the array.
 *
 * Description: This function iterates over an array of integers and
 * applies a given function to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
if (action != NULL)
{
action(array[i]);
}
}
}
