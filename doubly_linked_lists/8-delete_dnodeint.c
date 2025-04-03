#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: 1 if successful, -1 if failure occurs.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head || !(*head)) /* If list is empty */
		return (-1);

	/* Deleting the head node */
	if (index == 0)
	{
		*head = temp->next;
		if (*head) /* Update prev pointer of new head */
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse to the node at the given index */
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* If index is out of bounds */
	if (!temp)
		return (-1);

	/* Update next pointer of previous node */
	if (temp->prev)
		temp->prev->next = temp->next;

	/* Update prev pointer of next node */
	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
