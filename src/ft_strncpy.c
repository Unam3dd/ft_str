#include "ft_str.h"

char *ft_strncpy(char *dst, char *src, buffer_size_t size)
{
    char *save = dst;

    while (*src && size--)
        *(dst)++ = *(src)++;
    
    *dst = 0;

    return (save);
}