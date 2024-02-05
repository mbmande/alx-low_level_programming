#include "hash_tables.h"

/**
 * hash_table_create - a function that create hash table
 *
 * @size: the size of the table
 *
 * Return: ====
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j; /* Declear a variable fot iteration */
	hash_table_t *hshTbl; /* Declear a pointer to a hash table */
	/* Allocate memory for hash table */
	hshTbl = malloc(sizeof(hash_table_t));

	if (hshTbl == NULL)
		return (NULL); /*returns NULL if malloc fails */

	hshTbl->size = size; /* set the size of the hash table */
	/* Allocate memory for the Array of hash node */
	hshTbl->array = malloc(sizeof(hash_node_t *) * size);
	if (hshTbl->array == NULL)
	{
		free(hshTbl); /*Free previously allocated memory */
		return (NULL);
	}
	for (j = 0; j < size; j++)
		hshTbl->array[j] = NULL;
	return (hshTbl); /*return pointer to the created and initialized hash table*/
}
