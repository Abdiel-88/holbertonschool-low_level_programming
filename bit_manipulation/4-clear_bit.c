#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: the index, starting from 0, of the bit you want to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(*n) * 8)
{
return (-1); /* Return -1 if index is out of range */
}
mask = 1UL << index; /* Create a mask with a 1 at the specified index */
*n &= ~mask; /* Clear the bit using bitwise AND with the negated mask */
return (1);
}
