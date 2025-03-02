#include "main.h"
#include <string.h>

/**
 * *_strncat - Une fonction qui concatène deux chaînes de caract
 * @dest: La chaîne de destination à laquelle on va ajouter la chaîne sou
 * @src: La chaîne source à ajouter à la chaîne de desti
 * @n: taille
 *
 * Return: Un pointeur vers la chaîne de destination (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}

