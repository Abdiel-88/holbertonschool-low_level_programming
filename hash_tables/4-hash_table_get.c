#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
/* Get the index for this key in the hash table */
index = key_index((const unsigned char *)key, ht->size);
/* Traverse the linked list at this index to find the key */
node = ht->array[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value); /* Key found, return the value */
node = node->next;
}
return (NULL); /* Key not found */
}
