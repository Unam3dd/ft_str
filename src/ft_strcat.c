#include "ft_str.h"

char *ft_strcat(char *dst, char *src)
{
    char *save = dst;

    while (*dst)
        dst++;
    
    while (*src)
        *(dst)++ = *(src)++;
    
    *dst = 0;

    return (dst);
}