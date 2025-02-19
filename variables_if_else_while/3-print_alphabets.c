#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char v = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (v <= 'A')
	{
		putchar(v);
		v++;
	}
	putchar('\n');

	return (0);
}
