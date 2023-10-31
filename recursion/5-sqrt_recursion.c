#include "main.h"
#include <stdio.h>

/**
 * check_sqrt - Checks possible natural square root for a number.
 * @n: The number to check.
 * @i: The current possible square root.
 *
 * Return: The natural square root or -1 if none.
 */
int check_sqrt(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return (check_sqrt(n, i + 1));
}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to compute the square root for.
 *
 * Return: The natural square root or -1 if there's none.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (check_sqrt(n, 1));
}
