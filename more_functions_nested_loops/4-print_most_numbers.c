#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 followed by a new line.
 */
void print_most_numbers(void)
{
int number = 0;

while (number <= 9)
{
if (number != 2 && number != 4)
{
 _putchar('0' + number);
}
number++;
}
_putchar('\n');
}
