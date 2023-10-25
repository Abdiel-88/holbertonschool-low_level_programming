#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: A pointer to the input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
char leet_chars[] = "AaEeOoTtLl";
char leet_replacements[] = "44337711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_replacements[j];
break;
}
}
}
return (str);
}

