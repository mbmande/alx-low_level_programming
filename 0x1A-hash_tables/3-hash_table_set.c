#include "hash_tables.h"

/**
 * hash_table_set - ======
 * @ht: ======
 * @key: ======
 * @value: =====
 * Return: =======
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int dex;
	unsigned long int o;
	char *cpy_value;
	hash_node_t *sabo;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	cpy_value = strdup(value);
	if (cpy_value == NULL)
		return (0);
	dex = key_index((const unsigned char *)key, ht->size);

	for (o = dex; ht->array[o]; o++)
	{
		if (strcmp(ht->array[o]->key, key) == 0)
		{
			free(ht->array[o]->value);
			ht->array[0]->value = cpy_value;
			return (1);
		}
	}
	sabo = malloc(sizeof(hash_node_t));
	if (sabo == NULL)
	{
		free(cpy_value);
		return (0);
	}
	sabo->key = strdup(key);
	if (sabo->key == NULL)
	{
		free(sabo);
		return (0);
	}
	sabo->value = cpy_value;
	sabo->next = ht->array[dex];
	ht->array[dex] = sabo;
	return (1);
}
