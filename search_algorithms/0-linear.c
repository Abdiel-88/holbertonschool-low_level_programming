#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, returns -1
 */
int linear_search(int *array, size_t size, int value) {
    size_t i;

    if (array == NULL) {
        return -1;
    }

    for (i = 0; i < size; i++) {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return (int)i;
        }
    }

    return -1;
}
