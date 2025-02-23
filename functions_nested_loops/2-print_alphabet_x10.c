#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 270)
	{
		_putchar(alphabet[i % 27]);
		i++;
	}
}
