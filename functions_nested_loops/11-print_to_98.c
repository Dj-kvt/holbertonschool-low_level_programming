#include "main.h"

/**
 * print_to_98 - Prints a number using _putchar
 * @n: The number to print (0-81)
 */
void print_to_98(int n)
{
	if (n >= 10)
		_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 * times_table - Prints the 9 times table starting from 0
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}

			print_to_98(product);
		}
		_putchar('\n');
	}
}

