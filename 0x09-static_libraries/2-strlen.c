#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - It returns the length of a string
 * @str: The string to get the length of
 *
 * Return: The length of the @str.
 */

int _strlen(char *str)
{
        size_t length = 0;

        while (str[length] != '\0')
        {
                length++;
        }

        return (length);
}
