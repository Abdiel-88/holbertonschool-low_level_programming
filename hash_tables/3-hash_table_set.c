#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key. key can not be an empty string.
 * @value: The value associated with the key. value must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node, *temp;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
/* Get the index for this key in the hash table */
index = key_index((const unsigned char *)key, ht->size);
/* Check for collision - if there's already a node at this index */
temp = ht->array[index];
while (temp != NULL)
{
/* Update the value if the key already exists */
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
if (temp->value == NULL)
return (0); /* Return 0 if strdup failed */
return (1);
}
temp = temp->next;
}
/* Create a new node */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}
new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}
/* Insert the node at the beginning of the list to handle collision */
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
