#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
    int i = 0, j, result;

    while (i <= 9)
    {
        j = 0;
        while (j <= 9)
        {
            result = i * j;

            if (j > 0)
                _putchar(',');
            if (result < 10)
                _putchar(' ');
            _putchar(' ');
            if (result >= 10)
                _putchar(result / 10 + '0');
            else
                _putchar(' ');
            _putchar(result % 10 + '0');
            
            j++;
        }
        _putchar('\n');
        i++;
    }
}
