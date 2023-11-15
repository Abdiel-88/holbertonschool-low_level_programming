#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: A pointer to the first element of the array of integers.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Description: This function iterates over an array of integers and
 * uses the 'cmp' function to find an element. It returns
 * the index of the first element for which 'cmp' does not
 * return 0. If no such element is found or if 'size' is
 * less than or equal to 0, it returns -1.
 *
 * Return: The index of the first element for which 'cmp' does not return 0,
 * or -1 if no such element is found or if 'size' <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
if (array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
