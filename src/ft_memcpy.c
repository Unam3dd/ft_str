#include "ft_str.h"

void *ft_memcpy(void *dst, void *src, size_t size)
{
    char *d = (char *)dst;
    char *s = (char *)src;

    while (size) {
        *(d)++ = *(s)++;
        size--;
    }

    *d = 0;

    return (dst);
}