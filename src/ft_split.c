#include "ft_str.h"
#include <stdlib.h>


// TEMP Function
list_t *ft_split(char *str, char *delim)
{
    size_t n = ft_count_substr(str, delim);
    char *begin = str;
    char *new_str = begin;
    char *d = delim;
    list_t *list = new_list();
    list->index = 0;

    while (begin) {
        if (*begin == *d)
            d++;
        
        if (*d == 0)
            break;
        
        begin++;
    }

    *begin = 0;
    list->str = new_str;
    begin = ++begin;
    new_str = begin;
    d = delim;
    n -= 1;
    
    do {
        
        list_t *element = new_list();

        while (*begin) {

            if (*begin == *d)
                d++;
            
            if (*d == 0)
                break;

            begin++;
        }

        *begin = 0;
        element->str = new_str;
        push_list(&list, element);
        begin = ++begin;
        new_str = begin;
        d = delim;

    } while (n--);

    return (list);
}

void free_list_split(list_t **list)
{
    free_list(list);
    free(*list);
}