#include "hash_tables.h"

/**
 * hash_table_create - creates the hash table.
 * @size:  size of the array.
 * Return: pointer to hash table's new node, or NULL if something went wrong.
 *
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashtable = NULL;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t **) * size);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t **) * size);
	if (hashtable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		(hashtable->array)[i] = NULL;
	return (hashtable);
}
