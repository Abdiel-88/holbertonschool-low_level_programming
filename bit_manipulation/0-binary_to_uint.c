#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
if (b == NULL)
{
return (0); /* Return 0 if the input string is NULL */
}
while (*b)
{
if (*b != '0' && *b != '1')
{
return (0); /* Return 0 if the character is not '0' or '1' */
}
num <<= 1; /* Shift the current number by one bit to the left */
if (*b == '1')
{
num += 1; /* Add 1 if the current character is '1' */
}
b++; /* Move to the next character */
}
return (num); /* Return the calculated number */
}
