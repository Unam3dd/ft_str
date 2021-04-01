#include "ft_str.h"
#include <stddef.h>

char *ft_find_str(char *str, char *substr)
{
    if (!ft_substr(str, substr))
        return (NULL);
    
    char *ptr = NULL;

    while (*str) {
        
        if (*str == *substr)
            break;
        
        str++;
    }

    ptr = str;

    return (ptr);
}