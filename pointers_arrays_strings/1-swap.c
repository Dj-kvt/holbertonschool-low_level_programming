#include "main.h"

/**
 * swap_int - change the values of two integers
 *
 * @a: the values of integers a
 * @b: the values of integers b
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

