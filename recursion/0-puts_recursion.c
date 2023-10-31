#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Prints a string using recursion, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}