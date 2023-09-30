#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - gets the length of prefix substring
 * @s: input
 * @accept: input
 *
 * Return: The length of the prefix substring, or 0 if the prefix is not found
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, n, value, check;

        value = 0;

        for (i = 0; s[i] != '\0'; i++)
        {
                check = 0;

                for (n = 0; accept[n] != '\0'; n++)
        {
                if (accept[n] == s[i])
                {
                        value++;
                        check = 1;
                }
        }

        if (check == 0)
        {
                return (value);
        }
        }

        return (0);
}
