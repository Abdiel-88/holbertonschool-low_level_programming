#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stddef.h> /* For size_t */

/* Node of a hash table */
typedef struct hash_node_s
{
char *key; /* The key, string (The key is unique in the HashTable) */
char *value; /* The value corresponding to a key */
struct hash_node_s *next; /* A pointer to the next node of the list */
} hash_node_t;

/* Hash table data structure */
typedef struct hash_table_s
{
unsigned long int size; /* The size of the array */
hash_node_t **array; /* An array of size @size */
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);

/* Other function prototypes would go here, for example: */
/* int hash_table_set(hash_table_t *ht, const char *key, const char *value); */
/* char *hash_table_get(const hash_table_t *ht, const char *key); */
/* void hash_table_delete(hash_table_t *ht); */

#endif /* HASH_TABLES_H */
