#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar('0' + (hour / 10));  /* Print tens digit of the hour */
_putchar('0' + (hour % 10));  /* Print ones digit of the hour */
_putchar(':');                /* Print the colon */
_putchar('0' + (minute / 10)); /* Print tens digit of the minute */
_putchar('0' + (minute % 10)); /* Print ones digit of the minute */
_putchar('\n');                /* Print a newline character */
}
}
}
