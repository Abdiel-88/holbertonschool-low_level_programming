#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Updates the value it points to 98.
 * @n: A pointer to an integer.
 */
void reset_to_98(int *n)
{
    *n = 98;
}

int main(void)
{
    int num = 42;
    printf("Before: %d\n", num);

    reset_to_98(&num);

    printf("After: %d\n", num);

    return (0);
}
