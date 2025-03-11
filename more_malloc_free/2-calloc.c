#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Alloue la mémoire pour un tableau en utilisant mallo
 * @nmemb: Nombre d'éléments dans le table
 * @size: Taille en octets de chaque éléme
 *
 * Return: Un pointeur vers la mémoire allouée, ou NULL en cas d'éch
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
		char_ptr[i] = 0;

	return (ptr);
}

