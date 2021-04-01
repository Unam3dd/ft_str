#include "ft_str.h"

int ft_memcmp(void *str1, void *str2, size_t n)
{
    uint64_t d = 0;

    while (n--) {
        d = (*(unsigned char *)str1++ - *(unsigned char *)str2++);

        if (d)
            return (d);
    }

    return (0);
}