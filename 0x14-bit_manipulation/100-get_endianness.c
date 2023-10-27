#include "main.h"

/**
 * get_endianness - function that check endianness
 * Return: 0 if endian 1 if little endian
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *p = (char *)&b;

	return ((int)*p);
}
