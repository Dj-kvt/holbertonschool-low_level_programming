#include "main.h"

/**
 * more_numbers - prints the the numbers 10 times in lowercase
 */
void more_numbers(void)
{
	char numbers[31] = "01234567891011121314\n";
	int i = 0;

	while (i < 310)
	{
		_putchar(numbers[i % 31]);
		i++;
	}
}
