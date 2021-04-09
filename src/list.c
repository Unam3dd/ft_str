#include "ft_str.h"
#include <stdlib.h>
#include <stddef.h>

list_t *new_list(void)
{
    list_t *ptr = (list_t *)malloc(sizeof(list_t));
    
    ptr->next = NULL;
    ptr->prev = NULL;

    return (ptr);
}


void push_list(list_t **list, list_t *new)
{
    (*list)->prev = new;
    new->index = (*list)->index + 1;
    new->next = *list;
    *list = new;
}

void pop_list(list_t **list)
{
    list_t *next = (*list)->next;
    next->prev = NULL;
    next->index = (*list)->index - 1;
    free(*list);
    *list = next;
}

list_t *get_list(list_t **list, uint32_t n)
{
    list_t *actual = *list;

    while (actual) {
        if (actual->index == n)
            return (actual);
        
        actual = actual->next;
    }

    return (NULL);
}

void free_list(list_t **list)
{
    list_t *next = *list;

    while (*list) {
        next = (*list)->next;
        free(*list);
        *list = next;
    }
}
