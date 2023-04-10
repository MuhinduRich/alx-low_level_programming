#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created hash table,
 *         or NULL if an error occurred
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    /* Allocate memory for hash table */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* Allocate memory for array of nodes */
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    /* Initialize array to NULL */
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    /* Set size of hash table */
    ht->size = size;

    return (ht);
}

