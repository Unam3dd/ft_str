#include "ft_str.h"

void ft_zmem(char *str, buffer_size_t buffer_size)
{
    while (*str && buffer_size--)
        *(str)++ = 0;
}