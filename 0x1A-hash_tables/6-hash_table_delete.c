#include "hash_tables.h"

/**
 * hash_table_delete - =======
 * @ht: ==========
 * 
 * 
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
    unsigned long int o;
	hash_node_t *nd, *t;
	

	for (o = 0; o < ht->size; o++)
	{
		if (ht->array[o] != NULL)
		{
			nd = ht->array[o];
			while (nd != NULL)
			{
				t = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = t;
			}
		}
	}
	free(head->array);
	free(head);
}