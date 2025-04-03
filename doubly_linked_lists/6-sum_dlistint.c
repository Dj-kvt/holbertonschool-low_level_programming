#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;	   /* Ajouter la valeur du nœud */
		head = head->next; /* Passer au nœud suivant */
	}

	return (sum);
}
