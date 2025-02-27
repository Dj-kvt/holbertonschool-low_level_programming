#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: The string to be printed.
 *
 * Description: This function iterates through each character of the string
 * and prints it, followed by a newline.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

