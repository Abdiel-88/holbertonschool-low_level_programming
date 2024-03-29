#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @left: The starting index of the array to print
 * @right: The ending index of the array to print
 */
void print_array(const int *array, size_t left, size_t right)
{
size_t i;

printf("Searching in array: ");
for (i = left; i <= right; i++)
{
if (i > left)
printf(", ");
printf("%d", array[i]);
}
printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index where value is located
 * If value is not present in array or if array is NULL, returns -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0;
size_t right = size - 1;
size_t mid;

if (array == NULL)
return (-1);

while (left <= right)
{
print_array(array, left, right);
mid = left + (right - left) / 2;
if (array[mid] == value)
return ((int)mid);
if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}
