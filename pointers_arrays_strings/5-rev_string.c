#include "main.h"

/**
 * rev_string - Reverse a string in place
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	char *start, *end, temp;

	start = s;
	end = s;

	while (*end != '\0')
		end++;
	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

