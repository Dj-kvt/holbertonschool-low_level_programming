#include "main.h"

/**
 * _memcpy - Fills the first n bytes of the memory area pointed to by s.
 * @dest: Pointer to the memory area to be filled.
 * @src: The constant byte to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
