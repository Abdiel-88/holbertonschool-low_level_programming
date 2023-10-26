#include "main.h"
/**
 * _memcpy - Copies a memory area.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy from src to dest.
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
x = 0;
while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
