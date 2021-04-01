#include "ft_str.h"

void *ft_memset(void *dst, int value, size_t n)
{
    char *cdst = (char *)dst;

    while (n--)
        *(cdst)++ = value;
    
    return (dst);
}