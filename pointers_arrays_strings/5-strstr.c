#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - Finds the first occurrence of a substring in a string.
 * @haystack: A pointer to the string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int x = 0;

while (haystack[i] != '\0')
{
while (needle[x] != '\0')
{
if (haystack[i] == needle[x])
{
i -= x;
break;
}
x++;
}

if (needle[x] == '\0')
{
return (haystack + i - x);
}

i++;
}

return (NULL);
}
