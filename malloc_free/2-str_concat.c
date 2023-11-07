#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
int i, j;
int length_s1 = 0;
int length_s2 = 0;
/* Step 1: Handle NULL inputs */
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
/* Step 2: Calculate lengths */
while (s1[length_s1])
{
length_s1++;
}
while (s2[length_s2])
{
length_s2++;
}
/* Step 3: Allocate memory */
new_str = malloc(length_s1 + length_s2 + 1); /* +1 for the null terminator*/
if (new_str == NULL)
{
return (NULL); /* Return NULL on failure */
}
/* Step 4: Concatenate strings */
for (i = 0; i < length_s1; i++)
{
new_str[i] = s1[i];
}
for (j = 0; j < length_s2; j++, i++)
{
new_str[i] = s2[j];
}
/* Step 5: Null terminate the new string*/
new_str[i] = '\0';
return (new_str);
}
