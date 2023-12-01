#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits to flip to convert n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m; /* XOR n and m to find differing bits */
unsigned int count = 0;
while (xor)
{
count += xor & 1; /* Increment count if least significant bit is 1 */
xor >>= 1; /* Shift right by 1 bit to check next bit */
}
return (count);
}
