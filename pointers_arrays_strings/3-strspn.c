#include "main.h"
#include <stddef.h>
#include <string.h>
 /**
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer to the string to search.
 * @accept: The characters to compare with.
 *
 * Return: The number of bytes in the initial segment of s that consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0; 
int i = 0; 

while (s[i] != '\0')
{
if (strchr(accept, s[i]) != NULL)
{
count++;
}
else
{
break;
}
i++;
}

return (count); 
}
