#include "main.h"
#include <string.h>

/**
 * *_strcat - Une fonction qui concatène deux chaînes de caractèr
 * @dest: La chaîne de destination à laquelle on va ajouter la chaîne sourc.
 * @src: La chaîne source à ajouter à la chaîne de destinati
 *
 * Return: Un pointeur vers la chaîne de destination (dest)
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}

