#include "ft_str.h"

char *ft_strcpy(char *dst, char *src)
{
    char *save = dst;

    while (*src)
        *(dst)++ = *(src)++;
    
    *dst = 0;

    return (save);
}