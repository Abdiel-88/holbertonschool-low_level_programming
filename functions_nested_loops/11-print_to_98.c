#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting integer.
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            _putchar(n / 10 + '0'); /* Print tens digit */
            _putchar(n % 10 + '0'); /* Print ones digit */

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }

            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            _putchar(n / 10 + '0'); /* Print tens digit */
            _putchar(n % 10 + '0'); /* Print ones digit */

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }

            n--;
        }
    }
    _putchar('\n');
}
