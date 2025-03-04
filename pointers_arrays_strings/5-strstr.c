#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locate a substring
 * @haystack: The main string to search in
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (NULL);
}

