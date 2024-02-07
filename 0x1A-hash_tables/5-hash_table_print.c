#include "hash_tables.h"

/**
 * hash_table_print - =======
 * @ht: =======
 * Return: =====
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int o;
	hash_node_t *nd;
	unsigned char fg = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (o = 0; o < ht->size; o++)
	{
		if (ht->array[o] != NULL)
		{
			if (fg == 1)
				printf(", ");

			nd = ht->array[o];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			fg = 1;
		}
	}
	printf("}\n");
}
