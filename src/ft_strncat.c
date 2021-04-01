#include "ft_str.h"

char *ft_strncat(char *dst, char *src, size_t n)
{
    char *save = dst;

    while (*dst)
        dst++;
    
    while (*src && n--)
        *(dst)++ = *(src)++;
    
    *dst = 0;

    return (save);
}