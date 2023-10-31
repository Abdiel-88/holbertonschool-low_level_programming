#include "main.h"
#include <stdio.h>

/**
 * check_prime - Checks if a number is prime.
 * @n: The number to check.
 * @i: The current divisor to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
if (n % i == 0)
{
return (0);
}
else if (i * i > n)
{
return (1);
}
else
{
return (check_prime(n, i + 1));
}
}

/**
 * is_prime_number - Returns 1.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (check_prime(n, 2));
}
