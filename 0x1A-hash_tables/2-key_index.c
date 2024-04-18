#include "hash_tables.h"
/**
 * key_index - getting the index form the key
 * @key: string used to generate hash value
 * @size: the size of the table
 *
 * Return: hash value % size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash % size);
}
