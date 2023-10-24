#include "main.h"

/**
 * _puts prints string
 *
 * @str: pointer to the string
 *
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
