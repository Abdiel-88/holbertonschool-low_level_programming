#include <stdlib.h>

/**
 * hash_djb2 - implements the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 *
 * Description: This function takes a string and computes a hash value using
 *              the djb2 algorithm. The algorithm has been proven to have
 *              good distribution and speed on many different sets of keys.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int c;
while ((c = *str++))
{
hash = ((hash << 5) +hash) + c; /* hash * 33 + c */
}
return (hash);
}
