#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate the strings
 * @str: string duplictae
 *
 * Return: Pointer by the new string
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];

	copy[length] = '\0';

	return (copy);
}

