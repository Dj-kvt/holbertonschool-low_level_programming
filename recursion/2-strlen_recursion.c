#include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caract�
 * @s: Pointeur vers la chaîne de caractèr
 *
 * Return: La longueur de la chaîne (nombre de caractères)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

