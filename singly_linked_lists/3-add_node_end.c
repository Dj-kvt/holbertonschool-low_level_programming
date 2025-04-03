#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *new_str;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	/* Duplicate the string */
	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);
	/* Calculate string length */
	while (str[len])
		len++;
	/* Allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}
	/* Initialize new node */
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;
	/* If list is empty, new node becomes head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Traverse to the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	/* Append new node at the end */
	temp->next = new_node;

	return (new_node);
}
