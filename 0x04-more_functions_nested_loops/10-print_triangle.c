#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: size of the triangle.
 *
 * You can only use _putchar function to print.
 * If size is 0 or less, the function should print only a new line.
 * Use the character # to print the triangle.
 *
 * Return: No return.
 */

void print_triangle(int size)
{
	int x, y, z;
	int space;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x =0; x < size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	_putchar(32);
	}
	for (z = 0; z <= x; z++)
	}
	_putchar(35);
	}
	{
	_putchar('\n');
	}
}
