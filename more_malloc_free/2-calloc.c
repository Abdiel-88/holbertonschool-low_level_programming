#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Description: Allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL.
 * returns NULL.
 *
 * Return: A pointer to the allocated memory, which is set to zero. NULL if
 * nmemb or size is 0, or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memory;
if (nmemb == 0 || size == 0)
{
return (NULL);
}

memory = malloc(nmemb * size);
if (memory == NULL)
{
return (NULL);
}

memset(memory, 0, nmemb * size);

return (memory);
}
