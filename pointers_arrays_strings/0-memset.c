#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill with the constant byte.
 *
 * Return: A pointer to the filled memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
x = 0;

while (x < n)
{
s[x] = b;
x++;
}
return (s);
}
