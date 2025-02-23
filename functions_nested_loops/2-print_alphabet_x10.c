#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(alphabet[i % 27]);
	}
}
