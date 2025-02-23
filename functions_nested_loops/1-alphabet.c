#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char letter = 'a';
	char alphabet[27];
	int i;

	for (i = 0; i < 26; i++)
	{
		alphabet[i] = letter++;
	}
	alphabet[i] = '\n';

	for (i = 0; i < 27; i++)
	{
		_putchar(alphabet[i]);
	}
}
