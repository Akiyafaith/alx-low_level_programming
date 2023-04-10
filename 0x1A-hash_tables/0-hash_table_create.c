#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a table with a specified size
 * @size: contains the argument that allocate the memory for the table
 *
 * Return: NULL if the memory allocation fail, its a pointer to the table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht = malloc(sizeof(hash_table_t));
	unsigned long int x;

	if (hasht == NULL)
	{
		return (NULL);
	}
	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);

	if (hasht->array == NULL)
	{
		free(hasht);
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		hasht->array[x] = NULL;
	}
	return (hasht);
}
