#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strct - Concatenates two strings.
 * using at most n bytes from src
 * @dest: The destination string, where the result is stored.
 * @src: The source string to be appended to dest.
 * @n: The number of bytes to be added to dest
 *
 * Return: A pointer to be concatenated string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
