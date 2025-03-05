#include "main.h"

/**
 * _puts_recursion - Imprime une chaîne de caractère
 * @s: Pointeur vers la chaîne de caractères à impri
 *
 * Description: Cette fonction utilise la récursivité pour parcour
 * chaque caractère de la chaîne et l'imprimer. Lorsqu'elle attei
 * le caractère de fin de chaîne ('\0'), elle imprime une nouvelle lign
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

