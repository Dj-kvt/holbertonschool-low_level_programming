#include "main.h"

/**
 * print_most_numbers - Ajoute deux entiers et retourne le résultat
 *
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
