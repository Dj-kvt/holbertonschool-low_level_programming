#include "main.h"

/**
 * _strcpy - Copie une chaîne de caactères.
 * @dest: Pointeur vers le buffer de destination.
 * @src: Pointeur vers la chaîne source.
 *
 * Return: Le pointeur vers `dest`.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

