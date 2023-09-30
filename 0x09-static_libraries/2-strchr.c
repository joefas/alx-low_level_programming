#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string.
 * @s: pointer to the string to search
 * @c: the character to locate.
 *
 * Return: A pointer to first occurence of character @c in string or null
 */

char *_strchr(char *s, char c)
{
        int i;

        for (i = 0; s[i] >= '\0'; i++)
        {
                if (s[i] == c)
                        return (s + i);
        }

        return (NULL);
}
