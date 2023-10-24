#include "main"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the string to be converted.
 *
 * Return: The integer value represented by the string.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;

while (*s)
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
break;
}
s++;
}


while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}

return (result *sign);
}
