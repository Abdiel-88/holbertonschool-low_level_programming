#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    int i = 0;

    while (i < n)
    {
        int j = 0;
        while (j < i)
        {
            _putchar(' ');
            j++;
        }
        _putchar('\\');
        _putchar('\n');
        i++;
    }
}
