#include "ft_str.h"

// this function get length of the string
uint64_t ft_strlen(const char *str)
{
    uint64_t n = 0;

    while (*(str)++)
        n++;
    
    return (n);
}