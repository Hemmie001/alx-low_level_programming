#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht:  the hash table you want to into
  * @key: the key you are looking for
  * Return: value associated with the key, or NULL if key couldn’t be found.
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp_node;

	if (!ht || !key)
		return (NULL);

	/* get index */
	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];
	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}
