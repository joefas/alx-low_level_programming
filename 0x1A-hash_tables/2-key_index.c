#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key using the
 * hash_djb2 function
 *
 * @size: The size of the array of the hash table.
 * @key: The key to get the index of.
 *
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
