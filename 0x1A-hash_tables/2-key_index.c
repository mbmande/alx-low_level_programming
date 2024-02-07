#include "hash_tables.h"

/**
 * key_index - gets the key index
 * @key: the key
 * @size: the size
 * Return: the index of the key
 * Description: algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size); /* the returning*/
}
