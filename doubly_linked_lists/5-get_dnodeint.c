#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: The index of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head); /* Retourne le nœud trouvé */
		head = head->next; /* Avancer dans la liste */
		i++;
	}

	return (NULL); /* Si l'index dépasse la longueur de la liste */
}
