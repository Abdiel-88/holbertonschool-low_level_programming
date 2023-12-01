#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{  /* Recur until we reach the most significant bit */
print_binary(n >> 1);
}
_putchar((n & 1) + '0'); /* Print the least significant bit of current frame */
}
