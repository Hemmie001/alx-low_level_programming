#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: Key to be indexed.
 * @size: Size of the array of the hash table.
 *
 * Return: Returns the index at which the key/value pair
 * are stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_of_the_key;

	index_of_the_key = hash_djb2(key) % size;
	return (index_of_the_key);
}
