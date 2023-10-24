#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps two integer pointers, 'a' and 'b',
 * the values of the integers they point to. After calling this function, the
 * values of 'a' and 'b' will be interchanged.
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
