#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a list_t linked list
 * @head: Pointer to the first node of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;      /* Save current node */
		head = head->next; /* Move to next node */
		free(temp);       /* Free the node itself */
	}
}

