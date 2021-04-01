#include "ft_str.h"

char *ft_strchr(char *dst, int c)
{
    while (*dst) {
        if (*dst == c)
            return (dst);
        
        dst++;
    }

    return (NULL);
}