#include <ctype.h>
#include "main.h"
/**
 * _isdigit - Checks if a character is digit
 * @c: The character to check.
 *
 * Return: 1 if c is digit, 0 otherwise.
 */
int _isdigit(int c)
{

	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
