#include "ft_str.h"

// ft_memchr.c
void *ft_memchr(void *str, int c, size_t n)
{
    char *cstr = (char *)str;

    while (*cstr && n) {
        
        if (*cstr == c)
            return (cstr);
        
        cstr++;
        n--;
    }

    return (NULL);
}