#include "main.h"

/**
 * print_rev - imprime une chaîne de caractères en sens inverse,
 * suivie d'une nouvelle ligne.
 * @s: la chaîne à inverser et à imprimer.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}

	_putchar('\n');
}

