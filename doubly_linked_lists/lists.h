#ifndef LISTS_H
#define LISTS_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
} list_t;

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t print_dlistint(const dlistint_t *h);


#endif /* LISTS.S */