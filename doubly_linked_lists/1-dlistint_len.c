#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next; /*  Move to next node */
	}

	return (count);
}
