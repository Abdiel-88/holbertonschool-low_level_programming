#include "main.h"
#include <stdlib.h> 

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string on success, 
 * or NULL if str is NULL or if insufficient memory was available.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int len = 0;
unsigned int i;

/*Step 1: Check if `str` is NULL*/
if (str == NULL)
{
return (NULL);
}

/* Step 2: Calculate the length of `str`*/
while (str[len])
{
len++;
}

/* Step 3: Allocate memory for the new string (+1 for the null terminator)*/
dup = (char *)malloc((len + 1) * sizeof(char));

/*Check if malloc was successful*/
if (dup == NULL) {
return (NULL);
}

/* Step 4: Copy `str` into the allocated memory*/
for (i = 0; i < len; i++)
{
dup[i] = str[i];
}
dup[len] = '\0'; /* null-terminate the duplicated string*/

/* Step 5: Return the pointer to the new string*/
return (dup);
}
