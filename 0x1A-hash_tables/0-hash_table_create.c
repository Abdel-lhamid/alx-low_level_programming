#include "hash_tables.h"

/**
 * hash_table_create - create hash table given size
 * @size: size of the table
 * Return: poiter to the new created table,or if error null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_tab;
	hash_node_t **arr;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);

	h_tab = malloc(sizeof(hash_table_t));
	if(!h_tab)
		return (NULL);
	array = malloc(sizeof(*arr) * size);
	if(!arr)
	{
		free(h_tab);
		return(NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	h_tab->size = size;
	h_tab->array = arr;
	return(h_tab);
}
