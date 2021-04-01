#include "ft_str.h"

void ft_clear(char *str)
{
    while (*str)
        *(str)++ = 0;
}