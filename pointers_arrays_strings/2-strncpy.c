#include "main"

/**
 * _strncpy - Copies a string from src to dest, up to n characters.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}


while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
