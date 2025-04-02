#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t linked list
 * @head: Pointer to the first node of the list
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head;      /* Save current node */
        head = head->next; /* Move to next node */
        
        free(temp->str);  /* Free the duplicated string */
        free(temp);       /* Free the node itself */
    }
}
