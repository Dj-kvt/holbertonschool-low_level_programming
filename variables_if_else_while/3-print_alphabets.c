#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* Affichage des lettres minuscules */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	/* Affichage des lettres majuscules */
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	/* Nouvelle ligne */
	putchar('\n');

	return (0);
}
