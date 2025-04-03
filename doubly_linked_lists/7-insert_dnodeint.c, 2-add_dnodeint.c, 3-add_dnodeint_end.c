#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the doubly linked list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Value of the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (idx == 0) /* Insérer au début */
		return (add_dnodeint(h, n));

	/* Parcourir la liste jusqu'à idx - 1 */
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp) /* Si idx est hors limite */
		return (NULL);

	if (!temp->next) /* Insérer à la fin */
		return (add_dnodeint_end(h, n));

	/* Insérer au milieu */
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;

	temp->next->prev = new;
	temp->next = new;

	return (new);
}
