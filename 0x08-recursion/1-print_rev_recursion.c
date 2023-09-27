#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed in reverse
 *
 * return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
