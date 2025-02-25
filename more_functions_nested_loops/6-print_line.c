#include "main.h"

/**
 * print_line - display a line
 *@n: is a numbers of space that we want to print
 *
 */
void print_line(int n)
{
		int i;

		if (n <= 0)
		{
			_putchar('\n');
			return;
		}

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');

}
