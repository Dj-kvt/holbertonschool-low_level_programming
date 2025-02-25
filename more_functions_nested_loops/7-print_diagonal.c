#include "main.h"

/**
 * print_diagonal - dessine une ligne diagonale sur le terminal.
 * @n: nombre de fois que le caractère '\' doit être affiché.
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}

