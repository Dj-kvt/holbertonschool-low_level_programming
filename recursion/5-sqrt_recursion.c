#include "main.h"

/**
 * helper_sqrt - Recursively checks for the square root.
 * @n: The number to find the square root of.
 * @i: The current number to check as a potential square root.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int helper_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_sqrt(n, 0));
}

