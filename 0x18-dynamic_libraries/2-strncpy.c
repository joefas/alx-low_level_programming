#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - Copies a string to a destination string.
 * @dest: The destination string.
 * @src: The source string to be copied
 * @n: Number of bytes to be copied from src
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclen = 0;

	while (src[i++])
		srclen++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = srclen; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
