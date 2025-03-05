#include "main.h"

/**
 * _print_rev_recursion - Affiche une chaîne de caractèr
 * @s: Pointeur vers la chaîne de caractèr
 *
 * Description: Cette fonction utilise la récursivité pour atteind
 * la fin de la chaîne, puis imprime les caractères en remonta
 * l'appel récursif
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);

	_putchar(*s);
}

