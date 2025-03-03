#include "main.h"
#include <stddef.h>

/**
 * _strchr - Fills the first n bytes of the memory area pointed to by s.
 * @s: Pointer to the memory area to be filled.
 * @c: The constant byte to fill the memory with.
 *
 * Return: A pointer to the memory area s.
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)

			return (s);
		s++;
	}
	if (*s == c)

		return (s);

	return (NULL);
}

