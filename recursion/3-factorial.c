#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number for which to compute the factorial
 *
 * Return: factorial of n; if n is lower than 0, returns -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

