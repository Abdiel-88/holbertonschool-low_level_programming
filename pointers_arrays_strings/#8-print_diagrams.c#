#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the square matrix of integers.
 * @size: The size of the square matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
int diag1_sum = 0;
int diag2_sum = 0;

for (int i = 0; i < size; i++)
{
diag1_sum += a[i * size + i];
diag2_sum += a[i * size + (size - 1 - i)];
}

printf("Sum of diagonal 1: %d\n", diag1_sum);
printf("Sum of diagonal 2: %d\n", diag2_sum);
}
