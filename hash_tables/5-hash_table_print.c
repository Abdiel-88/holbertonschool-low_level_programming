#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: Prints the key/value pairs in the order they appear in
 *              the array of the hash table, and in the order they appear
 *              in the linked list for each index of the array.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
int comma_flag = 0; /* Flag to track whether to print a comma and space */

/* Check if the hash table is NULL */
if (ht == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
for (node = ht->array[i]; node != NULL; node = node->next)
{
if (comma_flag)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
comma_flag = 1;
}
}
printf("}\n");
}
