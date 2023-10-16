#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry Point of the program
 *
 * Description: This function generates a random number and
 * prints whether it's positive, zero, or negative.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
}
