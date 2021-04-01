#include "ft_str.h"

uint64_t ft_count_chr(const char *str, char c)
{
    uint64_t n = 0;

    while (*str)
        if (*(str)++ == c)
            n++;
    
    return (n);
}