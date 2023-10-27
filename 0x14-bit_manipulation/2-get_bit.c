#include "main.h"

/**
 * get bit - function that returns the value of bit at a given index
 * @n: given number to get the bit from
 * @index: index given starting from 0
 * Return: value of the bit at index or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int ) * 8))
		return (-1);

	return ((n >> index) & 1);
}
