#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 *
 * Description: Frees all memory used by the hash table, including
 *              the memory used by each key-value pair.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *temp;
unsigned long int i;

/* Check if the hash table is NULL */
if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
temp = node;
node = node->next;
free(temp->key);
free(temp->value);
free(temp);
}
}
free(ht->array);
free(ht);
}
