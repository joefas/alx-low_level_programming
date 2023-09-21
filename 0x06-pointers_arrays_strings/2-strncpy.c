#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - Copies a string to a destination string.
 * @dest: The destination string.
 * @src: The source string to be copied
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
