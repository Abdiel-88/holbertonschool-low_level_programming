#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stddef.h> /* For size_t */

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 *       The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 *
 * Description: Node structure for a hash table. Each node contains
 *              a key-value pair and a pointer to the next node in case
 *              of a collision, allowing a linked list structure.
 */
typedef struct hash_node_s
{
char *key; /* The key, string (The key is unique in the HashTable) */
char *value; /* The value corresponding to a key */
struct hash_node_s *next; /* A pointer to the next node of the list */
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 *         Each cell of this array is a pointer to the first node
 *         because we want our HashTable to use a Chaining collision handling
 *
 * Description: Hash table structure which contains an array of pointers
 *              to hash_node_t. Each element in the array represents a bucket
 *              that potentially contains a linked list of nodes due to
 *              collision handling via chaining.
 */
typedef struct hash_table_s
{
unsigned long int size; /* The size of the array */
hash_node_t **array; /* An array of size @size */
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);


/* Other function prototypes would go here, for example: */
/* int hash_table_set(hash_table_t *ht, const char *key, const char *value); */
/* char *hash_table_get(const hash_table_t *ht, const char *key); */
/* void hash_table_delete(hash_table_t *ht); */

#endif /* HASH_TABLES_H */
