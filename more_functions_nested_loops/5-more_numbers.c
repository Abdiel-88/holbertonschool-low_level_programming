#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times, then a new line.
 */
void more_numbers(void)
{
int i = 0;
int number;

while (i < 10)
{
number = 0;
while (number <= 14)
{
if (number > 9)
{
_putchar('0' + number / 10);
}
_putchar('0' + number % 10);
number++;
}
_putchar('\n');
i++;
}
}
