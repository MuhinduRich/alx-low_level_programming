#include "hash_tables.h"

/**
* hash_table_create - creates the hash table
* @size: size of array
* Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));

	if (hashtable == NULL);
	{
	return (NULL);
	}

	hashtable->size = size;

	hashtable->array = calloc(hashtable->size, sizeof(hash_node_t *));
	if (hashtable->array == NULL);
	{
	free(hashtable);
	return (NULL);
	}

	return (hashtable);
}
