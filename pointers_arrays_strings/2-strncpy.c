#include "main.h"
#include <string.h>

/**
 * *_strncpy - Une fonction qui concatèn
 * @dest: La chaîne de destinatio
 * @src: La chaîne sourc
 * @n: taille
 *
 * Return: Un pointeur vers la chaîne de destination (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}

