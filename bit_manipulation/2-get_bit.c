#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to be checked
 * @index: the index, starting from 0, of the bit you want to get
 *
 * Return: the value of the bit at index 'index' or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
return (-1); /* Return -1 if index is out of range */
}
return ((n >> index) & 1); /* Shift 'n' right 'index' times and return the least significant bit */
}
