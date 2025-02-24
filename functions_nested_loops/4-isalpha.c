#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{

		if (isalpha(c))
		{
			return (1);
		}
		else
		{
			return (0);

		}
}
