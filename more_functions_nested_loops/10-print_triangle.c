#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle using '#'
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, s;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (s = size - i; s > 0; s--)
			_putchar(' ');

		for (j = 1; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}

