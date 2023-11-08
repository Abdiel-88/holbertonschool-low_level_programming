#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string to concatenate. If NULL, treated as an empty string.
 * @s2: The second string to concatenate. If NULL, treated as an empty string.
 * @n: The maximum number of bytes from s2 to concatenate to s1.
 *
 * Description: The function creates a new string which is the result of
 * concatenating s1 and the first n bytes of s2. If n is greater or equal
 * to the length of s2, the whole string s2 will be concatenated. If the
 * memory allocation fails, the function will return NULL.
 *
 * Return: A pointer to the newly allocated space in memory containing the
 * concatenated string. NULL if the allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int length_s1 = (s1 != NULL) ? strlen(s1) : 0;
unsigned int length_s2 = (s2 != NULL) ? strlen(s2) : 0;
char *new_str;
unsigned int i;

if (n >= length_s2)
{
n = length_s2;
}

new_str = malloc(length_s1 + n + 1);
if (new_str == NULL)
{
return (NULL);
}

for (i = 0; i < length_s1; i++)
{
new_str[i] = s1[i];
}

for (i = 0; i < n; i++)
{
new_str[length_s1 + i] = s2[i];
}

new_str[length_s1 + n] = '\0';

return (new_str);
}
