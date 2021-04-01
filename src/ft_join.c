#include "ft_str.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_join(list_t **list, char *join_str)
{
    list_t *actual = *list;
    list_t *end = NULL;
    size_t n_alloc = 0;
    char *ptr = NULL;

    if (join_str)
        n_alloc += ((*list)->index * ft_strlen(join_str));

    while (actual) {
        n_alloc += (ft_strlen(actual->str));
        end = actual;
        actual = actual->next;
    }

    actual = end;

    ptr = (char *)malloc(sizeof(char) * n_alloc + 1);

    while (actual) {
        
        ft_strcat(ptr, actual->str);

        if (join_str)
            ft_strcat(ptr, join_str);
        
        actual = actual->prev;
    }

    ptr[n_alloc+1] = 0;

    return (ptr);
}