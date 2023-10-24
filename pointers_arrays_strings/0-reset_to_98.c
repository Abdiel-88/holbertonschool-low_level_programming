#include "main.h"

/**
 * add_numbers - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int add_numbers(int a, int b)
{
return (a + b);
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
int result = add_numbers(5, 7);
printf("The result is %d\n", result);
return (0);
}
