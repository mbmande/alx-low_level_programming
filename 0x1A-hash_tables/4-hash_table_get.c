#include "hash_tables.h"



char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int dex;
    hash_node_t *nd;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
    dex = key_index((const unsigned char *)key, ht->size);
	if (dex >= ht->size)
		return (NULL);

	nd = ht->array[dex];
	while (nd && strcmp(nd->key, key) != 0)
		nd = nd->next;
        
    return ((nd == NULL) ? NULL : nd->value);
}