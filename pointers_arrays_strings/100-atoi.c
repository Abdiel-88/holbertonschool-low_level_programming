#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the string to be converted.
 *
 * Return: The integer value represented by the string.
 */
int _atoi(char *s)
{
int value = 0, a, negative = 1;

 for (a = 0; s[a] != '\0'; a++)
   {
     if (s([a] == '-')
       {
	 negative = negative * -1;
       }
       if (s[a] >= '0' && negative < 0)
	 {
	   return (-2147483648);
	 }
       value = value * 10 + (s[a] - '0');
       if (s[a +1} < '0' || s[a + !] > '9')
	 {
	   return (value * negative);
	 }
       }
   }
 return (value * negative);
}
