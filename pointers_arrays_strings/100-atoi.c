#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the string to be converted.
 *
 * Return: The integer value represented by the string.
 */

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            break;
        }
        s++;
    }

    while (*s >= '0' && *s <= '9')
    {
        int digit = *s - '0';
	
        if (result > (INT_MAX - digit) / 10)
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        result = result * 10 + digit;
        s++;
    }

    return result * sign;
}
