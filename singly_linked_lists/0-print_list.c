#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste list
 * @h: Pointeur vers la tête de la list
 *
 * Return: Nombre de n~Suds dans la list
 */
size_t print_list(const list_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                if (h->str == NULL)
                        printf("[0] (nil)\n");
                else
                        printf("[%u] %s\n", h->len, h->str);

                h = h->next;
                count++;
        }

        return (count);
}
